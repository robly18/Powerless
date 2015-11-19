#include <SFML/Graphics.hpp>
#include "../WorldModule/WorldModule.hpp"

class WorldModule;

class InputModule {
public:
    bool handleInput(sf::RenderWindow&, WorldModule&);
};
