#include <memory>


class GraphicsComponent;
class AIComponent;
class PhysicsComponent;

class Entity {
public:
    Entity();
    Entity(GraphicsComponent&, AIComponent&, PhysicsComponent&);

    GraphicsComponent &graphics;
    AIComponent       &ai;
    PhysicsComponent  &physics;
};

#include "GraphicsComponent/GraphicsComponent.hpp"
#include "AIComponent/AIComponent.hpp"
#include "PhysicsComponent/PhysicsComponent.hpp"
