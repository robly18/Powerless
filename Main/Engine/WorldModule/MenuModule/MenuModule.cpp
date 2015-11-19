#include "MenuModule.hpp"

MenuModule::MenuModule() : root(*new TestMenu) {
}

void MenuModule::render(sf::RenderTarget &target) {
    root.render(target);
}

void MenuModule::handleEvent(sf::Event &event, WorldModule &world) {

}
