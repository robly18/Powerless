#include "GraphicsModule.hpp"

GraphicsModule::GraphicsModule(sf::RenderWindow& r) :
    window(r) {
}

void GraphicsModule::clear() {
    window.clear();
}

sf::RenderWindow& GraphicsModule::getRenderTarget() {
    return window;
}

void GraphicsModule::display() {
    window.display();
}
