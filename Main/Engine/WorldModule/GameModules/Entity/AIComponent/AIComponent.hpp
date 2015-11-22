
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
