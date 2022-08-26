//
// Created by oneshepherdssheep on 26/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_GAMELIB_H
#define CPP_DESIGN_PATTERNS_GAMELIB_H

#include <cstdint>
#include <cstdlib>

namespace gamelib {
    template<std::size_t FACES>
    constexpr std::size_t GetDiceRoll(){
        std::size_t roll = 1 + std::rand()/((RAND_MAX+1u)/FACES);
        return roll;
    }
}


#endif //CPP_DESIGN_PATTERNS_GAMELIB_H
