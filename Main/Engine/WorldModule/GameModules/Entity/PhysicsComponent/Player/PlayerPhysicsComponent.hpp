#ifndef PLAYERPHYSICSCOMPONENT_H
#define PLAYERPHYSICSCOMPONENT_H

#include "../PhysicsComponent.hpp"
#include <SFML/Graphics.hpp>

class PlayerPhysicsComponent : public PhysicsComponent {
public:
    void update(GameModule&, Entity&);
    void getMessage(const Message&);
    enum {
        STANDING,
        JUMPING,
        FALLING,
        WALKR,
        WALKL
    };
private:
    int state;
    sf::Vector2f pos, spd;
};

#endif
