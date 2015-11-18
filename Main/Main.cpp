#include <iostream>
#include "Engine/Engine.hpp"

#include <SFML/Graphics.hpp>

int main() {
    Engine engine;

    auto &window = engine.graphics.window;

    sf::CircleShape shape(100);
    shape.setFillColor(sf::Color::Blue);
    while (window.isOpen()) {
        sf::Event e;
        while (window.pollEvent(e)) {
            if (e.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        window.draw(shape);
        window.display();
    }
}
