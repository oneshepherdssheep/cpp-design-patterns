//
// Created by oneshepherdssheep on 25/09/22.
//

#include "game_engine_basic.h"
#include "gamelib.h"

GameEngineBasic::GameEngineBasic(const char * name,int windowWidth, int windowHeight):
        windowHeight_m(windowHeight),
        windowWidth_m(windowWidth){
    name_m.append(name);
}

GameEngineBasic::~GameEngineBasic(){
    std::cout << "[game_engine_basic] calling destructor." << std::endl;
}

void GameEngineBasic::InitGraphics() {
    std::cout << "[game_engine_basic] initialize graphics." << std::endl;

}

void GameEngineBasic::ProcessInput() {
    // TODO : write code here
    switch(gamelib::GetDiceRoll<6>()){
        case 1:
            std::cout << "[game_engine_basic] UP was pressed" << std::endl;
            break;
        case 2:
            std::cout << "[game_engine_basic] DOWN was pressed" << std::endl;
            break;
        case 3:
            std::cout << "[game_engine_basic] LEFT was pressed" << std::endl;
            break;
        case 4:
            std::cout << "[game_engine_basic] RIGHT was pressed" << std::endl;
            break;
        case 5:
            std::cout << "[game_engine_basic] SPACE was pressed" << std::endl;
            break;
        case 6:
        default:
            break;
    }
}

void GameEngineBasic::SetupScene() {
    // TODO : write code here
}

void GameEngineBasic::DisplayScene() {
    // TODO : write code here
}

GameEngine::KeyBoardEvent GameEngineBasic::GetLastKeyboardEvent() const {
    return keyboardEvent_m;
}