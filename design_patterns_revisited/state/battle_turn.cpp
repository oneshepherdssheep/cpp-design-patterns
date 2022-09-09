//
// Created by oneshepherdssheep on 09/09/22.
//

#include "battle_turn.h"
#include "battle_turn_state.h"

BattleTurn::BattleTurn() : state_m(&UnitSelectionState::GetInstance()){
    std::cout << "[battleturn] instantiation" << std::endl;
};

BattleTurn::~BattleTurn(){
    std::cout << "[battleturn] destruction" << std::endl;
}

void BattleTurn::HandleInput(Input input){
    BattleTurnState* state = state_m->HandleInput(*this,input);
    if(state != nullptr){
        state_m = state;

        // Call enter action on the new state
        state_m->Enter(*this);
    }
}