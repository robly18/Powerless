#include "GameModule.hpp"

GameModule::GameModule() {
    entityList.entities.push_back(std::shared_ptr<Entity>(new Entity));
}

void GameModule::render(sf::RenderTarget &target) {
    for (auto entity : entityList.entities) {
        entity->graphics.render(target, *entity);
    }
}

