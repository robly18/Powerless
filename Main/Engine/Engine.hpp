#ifndef ENGINE_H
#define ENGINE_H

#include "GraphicsModule/GraphicsModule.hpp"
#include "InputModule/InputModule.hpp"
#include "WorldModule/WorldModule.hpp"

class Engine {
public:
    Engine();

    ~Engine();
//private:
    sf::RenderWindow window;
    GraphicsModule graphics;
    InputModule input;
    WorldModule world;
};


#endif
