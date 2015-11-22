#include "AIComponent.hpp"

void NullAIComponent::update(GameModule &w, Entity &e) {

}


void TestAIComponent::update(GameModule &w, Entity &e) {
    sf::Event event;
    while (w.simulation.pollEvent(event)) {
        switch (event.key.code) {
        case sf::Keyboard::D:
            {
            Message m {Message::ACCELERATE};
            m.pos = {1, 0};
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
    }
}
