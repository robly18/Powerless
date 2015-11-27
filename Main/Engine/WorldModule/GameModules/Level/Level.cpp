#include "Level.hpp"

CTile::CType CTile::typeAt(const sf::Vector2f pos) const {
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

Level::Level() :
    width(10), height(10), leveldata(width*height) {
    for (int y = 0; y != 10; y++)
    for (int x = 0; x != 10; x++) {
        leveldata[x+y*width].type = CTile::AIR;
    }
    leveldata[5+9*width].type = CTile::GROUND;

}
