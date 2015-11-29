#include "PlayerPhysicsComponent.hpp"

void PlayerPhysicsComponent::update(GameModule &w, Entity &e) {
    if (w.level.floorAt(pos) == CTile::AIR) { //look at all this ugly af code im gonna remove someday
        Message m = {Message::ACCELERATE};
        m.pos = {0,30*w.simulation.delta.asSeconds()};
        e.sendMessage(m);
    } else {
        Message m = {Message::ACCELERATE};
        m.pos = {0,-spd.y};
        e.sendMessage(m);
    }
    if (state == WALKR) {
        spd.x = std::min(30.f, spd.x + 10*w.simulation.delta.asSeconds());
    } else if (state == STANDING) {
        spd.x = std::max(0.f, spd.x - 20*w.simulation.delta.asSeconds());
    }
    pos += spd*w.simulation.delta.asSeconds();
    Message m = {Message::SETPOS};
    m.pos = {pos.x, pos.y};
    e.sendMessage(m);
}

void PlayerPhysicsComponent::getMessage(const Message &m) {
    if (m.type == Message::SETPOS) {
        pos = {m.pos.x, m.pos.y};
    } else if (m.type == Message::MOVE) {
        pos.x += m.pos.x;
        pos.y += m.pos.y;
    } else if (m.type == Message::ACCELERATE) {
        spd.x += m.pos.x;
        spd.y += m.pos.y;
    } else if (m.type == Message::SETSTATE) {
        state = m.state;
    } else if (m.type == Message::UNSTATE) {
        state = STANDING;
    }
}
