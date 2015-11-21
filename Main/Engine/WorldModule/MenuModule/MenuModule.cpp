#include "MenuModule.hpp"

MenuModule::MenuModule() : root(*new GameMenu) {
}

void MenuModule::update(WorldModule &w) {
    root.update(w);
}

void MenuModule::render(sf::RenderTarget &target) {
    root.render(target);
}

void MenuModule::handleEvent(sf::Event &event, WorldModule &world) {
    root.handleEvent(event, world);
}
