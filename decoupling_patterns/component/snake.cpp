//
// Created by oneshepherdssheep on 18/09/22.
//

#include "snake.h"

Snake::Snake(uint32_t initialX, uint32_t initialY):
    x_m(initialX),
    y_m(initialY){
}

uint32_t Snake::GetX() const{
    return x_m;
}

uint32_t Snake::GetY() const{
    return y_m;
}

uint32_t Snake::SetX(const uint32_t newX){
    x_m = newX;
}

uint32_t Snake::SetY(const uint32_t newY){
    y_m = newY;
}