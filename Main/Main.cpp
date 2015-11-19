#include <iostream>
#include "Engine/Engine.hpp"

#include <SFML/Graphics.hpp>

int main() {
    Engine engine;

    while (engine.window.isOpen()) {
        engine.input.handleInput(engine.window, engine.world);
        engine.graphics.clear();
        engine.world.render(engine.graphics.getRenderTarget());
        engine.graphics.display();
    }
}
