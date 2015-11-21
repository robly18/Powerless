#include "GameMenu.hpp"

GameMenu::GameMenu() {

}

void GameMenu::drawOn(sf::RenderTarget &target) {
    game.render(target);
}

void GameMenu::actOnEvent(sf::Event &e, WorldModule &w) {
    game.simulation.pushToQueue(e);
}

void GameMenu::doUpdate(WorldModule &w) {
    game.simulation.doTick(game);
}
