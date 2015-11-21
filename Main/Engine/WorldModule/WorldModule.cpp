#include "WorldModule.hpp"

void WorldModule::render(sf::RenderTarget &target) {
    menu.render(target);
}

void WorldModule::handleEvent(sf::Event &e) {
    menu.handleEvent(e, *this);
}

GameModule *WorldModule::getGameModule() {
    return nullptr;
}
