#include "InputModule.hpp"

bool InputModule::handleInput(sf::RenderWindow &window, WorldModule &world) {
    sf::Event e;
    while (window.pollEvent(e)) {
        world.handleEvent(e);
        if (e.type == sf::Event::Closed) {
            window.close();
            return false;
        }
    }
    return true;
}
