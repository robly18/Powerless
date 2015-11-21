#include "GameModule.hpp"

GameModule::GameModule() {
    entityList.entities.push_back(std::shared_ptr<sf::RectangleShape>(new sf::RectangleShape(sf::Vector2f(10, 10))));
}

void GameModule::render(sf::RenderTarget &target) {
    for (auto entity : entityList.entities) {
        target.draw(*entity);
    }
}

