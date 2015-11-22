#include "GraphicsComponent.hpp"

void NullGraphicsComponent::render(sf::RenderTarget &target, Entity &e) {
}



TestGraphicsComponent::TestGraphicsComponent(sf::Vector2f size) :
    s(size) {
}

void TestGraphicsComponent::render(sf::RenderTarget &target, Entity&) {
    target.draw(s);
}

void TestGraphicsComponent::getMessage(Message &m) {
    if (m.type == Message::SETPOS) {
        s.setPosition(m.pos.x, m.pos.y);
    } else if (m.type == Message::MOVE) {
        s.move(m.pos.x, m.pos.y);
    }
}
