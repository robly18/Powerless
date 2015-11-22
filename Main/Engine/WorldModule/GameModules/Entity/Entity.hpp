#include <memory>


class GraphicsComponent;
class AIComponent;
class PhysicsComponent;

struct Message;

class Entity {
public:
    Entity();
    Entity(GraphicsComponent&, AIComponent&, PhysicsComponent&);
    void sendMessage(Message&);

    GraphicsComponent &graphics;
    AIComponent       &ai;
    PhysicsComponent  &physics;
};

#include "Component.hpp"
#include "GraphicsComponent/GraphicsComponent.hpp"
#include "AIComponent/AIComponent.hpp"
#include "PhysicsComponent/PhysicsComponent.hpp"
