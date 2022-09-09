//
// Created by oneshepherdssheep on 09/09/22.
//

#include "battle_turn_state.h"

/**
 * BattleTurnState
 */


/**
 * UnitSelectionState
 */
UnitSelectionState::UnitSelectionState(){
    std::cout << "[unitselectionstate] instantiation" << std::endl;
}

BattleTurnState& UnitSelectionState::GetInstance(){
    static UnitSelectionState unitSelectionState_g;
    return unitSelectionState_g;
}

BattleTurnState* UnitSelectionState::HandleInput(BattleTurn& battleTurn, Input input){
    if(input == BUTTON_A_RELEASE){
        std::cout << "[unitselectionstate] next state" << std::endl;
        return &UnitMovementState::GetInstance();
    }
    else{
        return nullptr;
    }
}

void UnitSelectionState::Update(BattleTurn& battleTurn){

}

void UnitSelectionState::Enter(BattleTurn& battleTurn){
    std::cout << "[unitselectionstate] select a unit" << std::endl;
    std::cout << "[unitselectionstate] change selected unit animation" << std::endl;
}

/**
 * UnitMovementState
 */
UnitMovementState::UnitMovementState(){
    std::cout << "[unitmovementstate] instantiation" << std::endl;
}

BattleTurnState& UnitMovementState::GetInstance(){
    static UnitMovementState unitMovementState_g;
    return unitMovementState_g;
}

BattleTurnState* UnitMovementState::HandleInput(BattleTurn& battleTurn, Input input){
    if(input == BUTTON_A_RELEASE){
        std::cout << "[unitmovementstate] next state" << std::endl;
        return &UnitActionOrderState::GetInstance();
    }
    else{
        return nullptr;
    }
}

void UnitMovementState::Update(BattleTurn& battleTurn){
}

void UnitMovementState::Enter(BattleTurn& battleTurn){
    std::cout << "[unitmovementstate] move the unit" << std::endl;
    std::cout << "[unitmovementstate] change selected unit animation" << std::endl;
}


/**
 * UnitActionOrderState
 */
UnitActionOrderState::UnitActionOrderState(){
    std::cout << "[unitactionorderstate] instantiation" << std::endl;
}


BattleTurnState& UnitActionOrderState::GetInstance(){
    static UnitActionOrderState unitActionOrderState_g;
    return unitActionOrderState_g;
}

BattleTurnState* UnitActionOrderState::HandleInput(BattleTurn& battleTurn, Input input){
    if(input == BUTTON_A_RELEASE){
        std::cout << "[unitactionorderstate] next state" << std::endl;
        return &UnitSelectionState::GetInstance();
    }
    else{
        return nullptr;
    }
}

void UnitActionOrderState::Update(BattleTurn& battleTurn){

}

void UnitActionOrderState::Enter(BattleTurn& battleTurn){
    std::cout << "[unitactionorderstate] select an action" << std::endl;
    std::cout << "[unitactionorderstate] change selected unit animation" << std::endl;
    std::cout << "[unitactionorderstate] mark selected unit as non selectable" << std::endl;
}