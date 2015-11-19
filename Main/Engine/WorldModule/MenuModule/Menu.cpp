#include "Menu.hpp"

Menu::Menu() {}

Menu *Menu::addMenu(Menu *newmenu) {
    submenus.push_back(std::unique_ptr<Menu>(newmenu));
    return this;
}

void Menu::render(sf::RenderTarget &target) {
    for (auto &menu : submenus) {
        menu->render(target);
    }
    drawOn(target);
}

TestMenu::TestMenu() : s(100.f) {s.setFillColor(sf::Color::Blue);}

void TestMenu::drawOn(sf::RenderTarget &target) {
    target.draw(s);
}
