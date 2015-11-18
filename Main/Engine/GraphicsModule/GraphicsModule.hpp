#include <SFML/Graphics.hpp>


const int   SCREENW = 400,
            SCREENH = 200;
const std::string
            PROGRAMNAME = "Hello there!";


class GraphicsModule {
public:
    GraphicsModule();

//private:
    sf::RenderWindow window;
};
