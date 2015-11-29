#include "PlayerAIComponent.hpp"

void PlayerAIComponent::update(GameModule &w, Entity &e) {
    sf::Event event;
    while (w.simulation.pollEvent(event)) {
        Message m;
        m.type = event.type == sf::Event::KeyPressed ? Message::SETSTATE : Message::UNSTATE;
        switch (event.key.code) {
        case sf::Keyboard::D:
            m.state = PlayerPhysicsComponent::WALKR;
            e.sendMessage(m);
            break;
        default:
            break;
        }
    }
}
