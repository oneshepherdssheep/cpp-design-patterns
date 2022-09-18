//
// Created by oneshepherdssheep on 18/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_PHYSICS_COMPONENT_H
#define CPP_DESIGN_PATTERNS_PHYSICS_COMPONENT_H

#include "snake.h"
#include "world.h"

class PhysicsComponent {

public:
    void update(Snake& snake, World& world);
};


#endif //CPP_DESIGN_PATTERNS_PHYSICS_COMPONENT_H
