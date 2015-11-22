
#include <SFML/Graphics.hpp>

class GameModule;
class Entity;


#include "../Component.hpp"

class GraphicsComponent : public Component {
public:
    virtual void render(sf::RenderTarget&, Entity&) = 0; //life goal: remove entity& from this call
};

class NullGraphicsComponent : public GraphicsComponent {
public:
    void render(sf::RenderTarget&, Entity&);
};

class TestGraphicsComponent : public GraphicsComponent {
public:
    TestGraphicsComponent(sf::Vector2f);

    void render(sf::RenderTarget&, Entity&);
    void getMessage(const Message&);

private:
    sf::RectangleShape s;
};


