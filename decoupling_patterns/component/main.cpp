//
// Created by oneshepherdssheep on 18/09/22.
//

#include "game_engine_basic.h"
#include <thread>

int main( int argc, char* args[] )
{
    GameEngine * gameEngine;
    gameEngine = new GameEngineBasic("cpp-snake-3110",840,480); // OG : 84 x 48

    gameEngine->InitGraphics();

    while(1){
        gameEngine->SetupScene();
        gameEngine->ProcessInput();
        gameEngine->DisplayScene();
        std::this_thread::sleep_for(std::chrono::milliseconds (16));
    }
    return 0;
}
