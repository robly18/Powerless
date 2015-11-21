#ifndef WORLDMENU_H
#define WORLDMENU_H

#include <vector>
#include <memory>
#include <SFML/Graphics.hpp>
class WorldModule;

class Menu {
public:
    Menu();
    std::vector<std::unique_ptr<Menu>> submenus;

    Menu *addMenu(Menu*);

    void render(sf::RenderTarget&);
    void handleEvent(sf::Event&, WorldModule&);
    void update(WorldModule&);

private:
    virtual void drawOn(sf::RenderTarget&) = 0;
    virtual void actOnEvent(sf::Event&, WorldModule&) = 0;
    virtual void doUpdate(WorldModule&) = 0;
};

//for copypasting purposes
class NullMenu : public Menu {
private:
    void drawOn(sf::RenderTarget&);
    void actOnEvent(sf::Event&, WorldModule&);
    void doUpdate(WorldModule&);
};

class TestMenu : public Menu {
public:
    TestMenu();
    sf::CircleShape s;
private:
    void drawOn(sf::RenderTarget&);
    void actOnEvent(sf::Event&, WorldModule&);
    void doUpdate(WorldModule&);
};

#include "GameMenu/GameMenu.hpp"

#include "../WorldModule.hpp"

#endif
