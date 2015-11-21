#include <vector>
#include <memory>
#include <SFML/Graphics.hpp>

class EntityListModule {
public:
    std::vector<std::shared_ptr<sf::RectangleShape>> entities;
};
