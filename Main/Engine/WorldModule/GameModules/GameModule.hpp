#ifndef GAMEMODULE_H
#define GAMEMODULE_H

#include "EntityListModule.hpp"
#include "SimulationModule.hpp"

class GameModule {
public:
    GameModule();

    void render(sf::RenderTarget&);

    EntityListModule entityList;
    SimulationModule simulation;
};

#include "../MenuModule/MenuModule.hpp"

#endif
