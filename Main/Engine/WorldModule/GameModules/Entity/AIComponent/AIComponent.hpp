#ifndef AICOMPONENT_H
#define AICOMPONENT_H

#include "../Component.hpp"

class GameModule;
class Entity;

class AIComponent : public Component {
public:
    virtual void update(GameModule&, Entity&) = 0;
};

class NullAIComponent : public AIComponent {
public:
    void update(GameModule&, Entity&);
};

class TestAIComponent : public AIComponent {
public:
    void update(GameModule&, Entity&);
};

#include "../../GameModule.hpp"
#include "../Entity.hpp"

#endif
