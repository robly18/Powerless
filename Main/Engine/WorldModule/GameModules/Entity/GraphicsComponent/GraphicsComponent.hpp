
#include <SFML/Graphics.hpp>

class GameModule;
class Entity;

class GraphicsComponent {
public:
    virtual void render(sf::RenderTarget&, Entity&) = 0;
};

class NullGraphicsComponent : public GraphicsComponent {
public:
    void render(sf::RenderTarget&, Entity&);
};
