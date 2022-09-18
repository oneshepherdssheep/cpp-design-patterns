//
// Created by oneshepherdssheep on 18/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_SNAKE_H
#define CPP_DESIGN_PATTERNS_SNAKE_H

#include <cstdint>

class Snake {
    public:
        explicit Snake(uint32_t initialX, uint32_t initialY);
        uint32_t GetX() const;
        uint32_t GetY() const;
        uint32_t SetX(const uint32_t newX);
        uint32_t SetY(const uint32_t newY);
    private:
        uint32_t x_m;
        uint32_t y_m;
};


#endif //CPP_DESIGN_PATTERNS_SNAKE_H
