
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
};
