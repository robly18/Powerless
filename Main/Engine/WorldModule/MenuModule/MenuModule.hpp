#ifndef MENUMODULE_H
#define MENUMODULE_H

#include <SFML/Graphics.hpp>
#include "Menu.hpp"

class WorldModule;

class MenuModule {
public:
    MenuModule();

    void render(sf::RenderTarget&);
    void handleEvent(sf::Event&, WorldModule&);

    Menu &root;
};

#endif
