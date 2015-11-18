#include <SFML/Graphics.hpp>


const int   SCREENW = 400,
            SCREENH = 200;
const std::string
            PROGRAMNAME = "Hello there!";


class GraphicsModule {
public:
    GraphicsModule(sf::RenderWindow&);

    void clear();
    sf::RenderWindow &getRenderTarget();
    void display();

//private:
    sf::RenderWindow& window;
};
