//
// Created by oneshepherdssheep on 18/09/22.
//

#include "game_engine_sdl.h"
#include <thread>

int main( int argc, char* args[] )
{
    GameEngine * gameEngine;
    gameEngine = new GameEngineSDL("cpp-snake",420,240); // OG : 84 x 48

    gameEngine->InitGraphics();


    while(1){
        GameEngine::KeyBoardEvent keyboardEvent;
        gameEngine->SetupScene();
        gameEngine->ProcessInput(keyboardEvent);
        gameEngine->DisplayScene();
        std::this_thread::sleep_for(std::chrono::milliseconds (16));

    }
    return 0;
}
