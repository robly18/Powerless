#include "GameModule.hpp"

GameModule::GameModule() {
    entityList.entities.push_back(std::shared_ptr<Entity>(
            new Entity(*new TestGraphicsComponent(sf::Vector2f(10,10)),
                       *new NullAIComponent,
                       *new NullPhysicsComponent)
        ));
    Message m;
    m.type = Message::SETPOS;
    m.pos = {10,10};
    entityList.entities[0]->sendMessage(m);
}

void GameModule::render(sf::RenderTarget &target) {
    for (auto entity : entityList.entities) {
        entity->graphics.render(target, *entity);
    }
}

