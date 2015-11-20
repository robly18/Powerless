#include "Menu.hpp"

Menu::Menu() {}

Menu *Menu::addMenu(Menu *newmenu) {
    submenus.push_back(std::unique_ptr<Menu>(newmenu));
    return this;
}

void Menu::handleEvent(sf::Event &e, WorldModule &w) {
    actOnEvent(e, w);
    for (auto &menu : submenus) {
        menu->handleEvent(e, w);
    }
}

void Menu::render(sf::RenderTarget &target) {
    for (auto &menu : submenus) {
        menu->render(target);
    }
    drawOn(target);
}

void Menu::update(WorldModule &w) {
    doUpdate(w);
    for (auto &menu : submenus) {
        menu->update(w);
    }
}

void NullMenu::drawOn(sf::RenderTarget &target) {

}
void NullMenu::actOnEvent(sf::Event &e, WorldModule &w) {

}
void NullMenu::doUpdate(WorldModule &w) {

}


TestMenu::TestMenu() : s(100.f) {s.setFillColor(sf::Color::Blue);}

void TestMenu::drawOn(sf::RenderTarget &target) {
    target.draw(s);
}

void TestMenu::actOnEvent(sf::Event &e, WorldModule &w) {
    if (e.type == sf::Event::MouseMoved) {
        s.setPosition(e.mouseMove.x-100.f, e.mouseMove.y-100.f);
    }
}

void TestMenu::doUpdate(WorldModule &w) {

}


