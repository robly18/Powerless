#include "Level.hpp"
#include <iostream>

CType CTile::typeAt(const sf::Vector2f pos) const {
    switch (type) {
    case AIR:
        return AIR;
    case GROUND:
        return GROUND;
    case SLOPELEFT:
        return pos.x > pos.y ? AIR : SLOPELEFT;
    case SLOPERIGHT:
        return pos.x > (CTILESIDE - pos.y) ? AIR : SLOPERIGHT;
    case FENCELEFT:
        return pos.x == 0 ? AIR : FENCELEFT;
    }
}

void CTile::render(sf::RenderTarget &target, sf::Vector2f pos) {
    sf::RectangleShape s({CTILESIDE, CTILESIDE});
    s.setPosition(pos);
    switch (type) {
    case AIR:
        s.setFillColor(sf::Color::Blue);
        break;
    default:
        s.setFillColor(sf::Color::White);
        break;
    }
    target.draw(s);
}

Level::Level() :
    width(10), height(10), leveldata(10*10, CTile{CTile::AIR}) {
    for (int x = 0; x != 10; x++) {
        leveldata[x+9*width].type = CTile::GROUND;
    }
    leveldata[5+8*width].type = CTile::GROUND;

}

void Level::render(sf::RenderTarget &target) {
    for (int x = 0; x != width; x++)
    for (int y = 0; y != height; y++) {
        leveldata[x+y*width].render(target, {x*CTile::CTILESIDE,y*CTile::CTILESIDE});
    }
}
