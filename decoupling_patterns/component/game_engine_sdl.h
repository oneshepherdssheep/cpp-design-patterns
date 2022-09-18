//
// Created by oneshepherdssheep on 18/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_GAME_ENGINE_SDL_H
#define CPP_DESIGN_PATTERNS_GAME_ENGINE_SDL_H

#include "game_engine.h"
#include <SDL2/SDL.h>

class GameEngineSDL : public GameEngine {
public:
    explicit GameEngineSDL(const char * name,int windowWidth,int windowHeight);
    ~GameEngineSDL();
    void SetupScene() override;
    void InitGraphics() override;
    void DisplayScene() override;
    void ProcessInput(GameEngine::KeyBoardEvent &keyboardEvent) override;

private:
    GameEngine::KeyBoardEvent ProcessKeyboardEvent(SDL_Keycode keyCode);
    int windowWidth_m;
    int windowHeight_m;
    SDL_Renderer *sdlRenderer_m;
    SDL_Window *sdlWindow_m;
    std::string name_m;
};




#endif //CPP_DESIGN_PATTERNS_GAME_ENGINE_SDL_H
