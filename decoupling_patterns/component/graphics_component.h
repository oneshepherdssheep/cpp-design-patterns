//
// Created by oneshepherdssheep on 18/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_GRAPHICS_COMPONENT_H
#define CPP_DESIGN_PATTERNS_GRAPHICS_COMPONENT_H

#include "snake.h"
#include "game_engine.h"

class GraphicsComponent {
public:
    void update(Snake& snake, GameEngine* gameEngine);
};


#endif //CPP_DESIGN_PATTERNS_GRAPHICS_COMPONENT_H
