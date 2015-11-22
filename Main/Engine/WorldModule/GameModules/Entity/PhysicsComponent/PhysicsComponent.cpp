#include "PhysicsComponent.hpp"

void NullPhysicsComponent::update(GameModule &w, Entity &e) {

}


void TestPhysicsComponent::update(GameModule &w, Entity &e) {
    float deltax = speedx * w.simulation.delta.asSeconds();
    if (x + deltax > 200) {
        speedx = -speedx;
    }
    Message m {Message::MOVE};
    m.pos = {deltax, speedy};
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
