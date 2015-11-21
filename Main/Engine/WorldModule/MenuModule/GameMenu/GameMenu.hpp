#ifndef GAMEMENU_H
#define GAMEMENU_H

#include "../Menu.hpp"
#include "../../GameModules/GameModule.hpp"

class GameMenu : public Menu {
public:
    GameMenu();
private:
    void drawOn(sf::RenderTarget&);
    void actOnEvent(sf::Event&, WorldModule&);
    void doUpdate(WorldModule&);

    GameModule game;
};

#endif
