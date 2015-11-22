#include "SimulationModule.hpp"

void SimulationModule::doTick(GameModule &w) {
    while (!eventQueue.empty()) {
        switch (eventQueue.front().key.code) {
        case sf::Keyboard::D:
            {
            Message m {Message::MOVE};
            m.pos = {10, 0};
            w.entityList.entities[0]->sendMessage(m);
            }
        break;
        case sf::Keyboard::S:
            {
            Message m {Message::MOVE};
            m.pos = {0, 10};
            w.entityList.entities[0]->sendMessage(m);
            }
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

bool SimulationModule::pollEvent(sf::Event &e) {
    if (eventQueue.empty()) return false;
    e = eventQueue.front();
    eventQueue.pop();
    return true;
}
