#ifndef PLAYERAICOMPONENT_H
#define PLAYERAICOMPONENT_H

#include "../AIComponent.hpp"
#include <algorithm>

class PlayerAIComponent : public AIComponent {
public:
    void update(GameModule&, Entity&);
};

#endif
