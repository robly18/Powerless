#ifndef GAMEMODULE_H
#define GAMEMODULE_H

#include "EntityListModule.hpp"
#include "SimulationModule.hpp"
#include "Level/LevelModule.hpp"

#include "Entity/PhysicsComponent/Player/PlayerPhysicsComponent.hpp"
#include "Entity/AIComponent/Player/PlayerAIComponent.hpp"

class GameModule {
public:
    GameModule();

    void render(sf::RenderTarget&);

    EntityListModule entityList;
    SimulationModule simulation;
    LevelModule      level;
};

#include "../MenuModule/MenuModule.hpp"

#endif
