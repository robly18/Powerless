#ifndef MENUMODULE_H
#define MENUMODULE_H

#include <SFML/Graphics.hpp>

class WorldModule;
class Menu;

class MenuModule {
public:
    MenuModule();

    void render(sf::RenderTarget&);
    void handleEvent(sf::Event&, WorldModule&);
    void update(WorldModule&);

    Menu &root;
};

#include "Menu.hpp"

#endif
