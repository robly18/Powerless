#ifndef WORLD_H
#define WORLD_H

#include <SFML/Graphics.hpp>
#include "MenuModule/MenuModule.hpp"
#include "GameModules/GameModule.hpp"

class WorldModule {
public:
    void render(sf::RenderTarget&);
    void handleEvent(sf::Event&);

    MenuModule menu;
    GameModule *getGameModule();
};

#endif
