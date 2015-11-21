
class GameModule;
class Entity;

class PhysicsComponent {
public:
    virtual void update(GameModule&, Entity&) = 0;
};

class NullPhysicsComponent : public PhysicsComponent {
public:
    void update(GameModule&, Entity&);
};
