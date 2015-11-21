#include "SimulationModule.hpp"

void SimulationModule::doTick(GameModule &w) {
    while (!eventQueue.empty()) {
        switch (eventQueue.front().key.code) {
        case sf::Keyboard::D:
            w.entityList.entities[0]->move(1,0);
        break;
        case sf::Keyboard::S:
            w.entityList.entities[0]->move(0,1);
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
