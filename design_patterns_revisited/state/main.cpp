// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com
//
// Created by oneshepherdssheep on 09/09/22.
//

#include <cstdlib>
#include <iostream>
#include "battle_turn.h"

int main(int argc,char * argv[]){
    BattleTurn battleTurn;
    battleTurn.HandleInput(Input::BUTTON_A_RELEASE);
    battleTurn.HandleInput(Input::BUTTON_B_RELEASE);
    battleTurn.HandleInput(Input::BUTTON_B_RELEASE);
    battleTurn.HandleInput(Input::BUTTON_A_RELEASE);
    battleTurn.HandleInput(Input::BUTTON_B_RELEASE);
    battleTurn.HandleInput(Input::BUTTON_A_RELEASE);
    battleTurn.HandleInput(Input::BUTTON_B_RELEASE);
    battleTurn.HandleInput(Input::BUTTON_B_RELEASE);
    battleTurn.HandleInput(Input::BUTTON_B_RELEASE);
    battleTurn.HandleInput(Input::BUTTON_A_RELEASE);
    return EXIT_SUCCESS;
}