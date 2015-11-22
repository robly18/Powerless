#ifndef PHYSICSCOMPONENT_H
#define PHYSICSCOMPONENT_H

#include "../Component.hpp"

class GameModule;
class Entity;

class PhysicsComponent : public Component {
public:
    virtual void update(GameModule&, Entity&) = 0;
};

class NullPhysicsComponent : public PhysicsComponent {
public:
    void update(GameModule&, Entity&);
};

class TestPhysicsComponent : public PhysicsComponent {
public:
    void update(GameModule&, Entity&);
    void getMessage(const Message&);
private:
    float speedx = 0, speedy = 0;
    float x = 0;
};

#include "../Entity.hpp"

#endif
