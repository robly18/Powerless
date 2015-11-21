#include <vector>
#include <memory>
#include <SFML/Graphics.hpp>

#include "Entity/Entity.hpp"

class EntityListModule {
public:
    std::vector<std::shared_ptr<Entity>> entities;
};
