//
// Created by oneshepherdssheep on 09/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_BATTLE_TURN_H
#define CPP_DESIGN_PATTERNS_BATTLE_TURN_H

#include "battle_turn.fwd.h"
#include "battle_turn_state.fwd.h"
#include "input.h"
#include <iostream>

/**
 *
 */
class BattleTurn {
public:
    explicit BattleTurn();
    ~BattleTurn();
    void HandleInput(Input input);

private:
    BattleTurnState* state_m;
};



#endif //CPP_DESIGN_PATTERNS_BATTLE_TURN_H
