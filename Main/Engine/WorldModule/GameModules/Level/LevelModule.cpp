#include "LevelModule.hpp"


LevelModule::LevelModule() : currentLevel(new Level) {
}

CType LevelModule::floorAt(const sf::Vector2f pos) {
    int tilex = static_cast<int>(pos.x / CTile::CTILESIDE);
    int tiley = static_cast<int>(pos.y / CTile::CTILESIDE);
    return currentLevel->leveldata[tilex + tiley*currentLevel->width].typeAt({pos.x-tilex, pos.y-tiley});
}
