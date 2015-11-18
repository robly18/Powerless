#include "Engine.hpp"

Engine::Engine() :
    window(sf::VideoMode(SCREENW, SCREENH), PROGRAMNAME),
    graphics(window) {
}

Engine::~Engine() {
}
