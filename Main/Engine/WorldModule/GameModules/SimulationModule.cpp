#include "SimulationModule.hpp"

void SimulationModule::doTick(GameModule &w) {
    delta = clock.restart();
    for (auto &e : w.entityList.entities) {
        e->ai.update(w, *e);
        e->physics.update(w, *e);
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
