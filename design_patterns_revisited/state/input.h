//
// Created by oneshepherdssheep on 09/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_INPUT_H
#define CPP_DESIGN_PATTERNS_INPUT_H

#include <cstdint>

/**
 *
 */
enum Input : std::uint8_t {
    BUTTON_A_PRESS,
    BUTTON_B_PRESS,
    BUTTON_UP_PRESS,
    BUTTON_DOWN_PRESS,
    BUTTON_LEFT_PRESS,
    BUTTON_RIGHT_PRESS,
    BUTTON_A_RELEASE,
    BUTTON_B_RELEASE,
    BUTTON_UP_RELEASE,
    BUTTON_DOWN_RELEASE,
    BUTTON_LEFT_RELEASE,
    BUTTON_RIGHT_RELEASE,
};


#endif //CPP_DESIGN_PATTERNS_INPUT_H
