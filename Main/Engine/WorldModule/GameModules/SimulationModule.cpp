#include "SimulationModule.hpp"

void SimulationModule::doTick(GameModule &w) {
    std::cout<<x<<", "<<y<<"\n";
}

void SimulationModule::pushToQueue(sf::Event &e) {
    if (e.type == sf::Event::KeyPressed) {
        if (e.key.code == sf::Keyboard::D) {
            x++;
        } else if (e.key.code == sf::Keyboard::S) {
            y++;
        }
    }
}
