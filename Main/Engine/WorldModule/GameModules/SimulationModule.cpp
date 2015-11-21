#include "SimulationModule.hpp"

void SimulationModule::doTick(GameModule &w) {
    while (!eventQueue.empty()) {
        switch (eventQueue.front().key.code) {
        case sf::Keyboard::D:

        break;
        case sf::Keyboard::S:

        break;
        default: break;
        }
        eventQueue.pop();
    }
}

void SimulationModule::pushToQueue(sf::Event &e) {
    if (e.type == sf::Event::KeyPressed) {
        eventQueue.push(e);
    }
}
