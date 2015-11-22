#include "Entity.hpp"

Entity::Entity () : Entity(
                           *new NullGraphicsComponent,
                           *new NullAIComponent,
                           *new NullPhysicsComponent
                            ) {

}

Entity::Entity(GraphicsComponent &g, AIComponent &a, PhysicsComponent &p) :
    graphics(g), ai(a), physics(p) {
}

void Entity::sendMessage(Message &m) {
    graphics.getMessage(m);
    physics.getMessage(m);
    ai.getMessage(m);
}
