#ifndef ENTITYLISTMODULE_H
#define ENTITYLISTMODULE_H

#include <vector>
#include <memory>

class Entity;

class EntityListModule {
public:
    std::vector<std::shared_ptr<Entity>> entities;
};

#include "Entity/Entity.hpp"

#endif
