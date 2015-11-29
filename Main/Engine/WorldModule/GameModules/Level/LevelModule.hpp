
#include <memory>
#include "Level.hpp"

class LevelModule {
public:
    LevelModule();

    CType floorAt(const sf::Vector2f);

    std::unique_ptr<Level> currentLevel;
};
