//
// Created by oneshepherdssheep on 25/09/22.
//

#include "game_engine_basic.h"

GameEngineBasic::GameEngineBasic(const char * name,int windowWidth, int windowHeight):
        windowHeight_m(windowHeight),
        windowWidth_m(windowWidth){
    name_m.append(name);
}

GameEngineBasic::~GameEngineBasic(){
    std::cout << "[game_engine_basic] calling destructor." << std::endl;
}

void GameEngineBasic::InitGraphics() {
    // TODO : write code here
}

void GameEngineBasic::ProcessInput() {
    // TODO : write code here
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