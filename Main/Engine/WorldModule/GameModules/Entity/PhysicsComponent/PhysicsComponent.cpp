#include "PhysicsComponent.hpp"

void NullPhysicsComponent::update(GameModule &w, Entity &e) {

}


void TestPhysicsComponent::update(GameModule &w, Entity &e) {
    if (x + speedx > 200) {
        speedx = 0;
    }
    Message m {Message::MOVE};
    m.pos = {speedx, speedy};
    e.sendMessage(m);
}

void TestPhysicsComponent::getMessage(const Message &m) {
    if (m.type == Message::ACCELERATE) {
        speedx += m.pos.x;
        speedy += m.pos.y;
    } else if (m.type == Message::MOVE) {
        x += m.pos.x;
    }
}
