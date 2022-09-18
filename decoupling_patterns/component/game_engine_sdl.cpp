//
// Created by oneshepherdssheep on 18/09/22.
//

#include "game_engine_sdl.h"


GameEngineSDL::GameEngineSDL(const char * name,int windowWidth, int windowHeight):
    windowHeight_m(windowHeight),
    windowWidth_m(windowWidth),
    sdlRenderer_m(nullptr),
    sdlWindow_m(nullptr){
    name_m.append(name);
}

GameEngineSDL::~GameEngineSDL(){
    std::cout << "[game_engine_sdl] calling destructor." << std::endl;
}

void GameEngineSDL::InitGraphics() {
    int renderFlags, windowFlags;

    renderFlags = SDL_RENDERER_ACCELERATED;
    windowFlags = 0;

    // SDL initialization
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        std::cout << "[game_engine_sdl] couldn't initialize SDL : " << SDL_GetError() << std::endl;
        exit(1);
    }
    else {
        std::cout << "[game_engine_sdl] SDL initialized!" << std::endl;
    }

    // SDL : configure window
    sdlWindow_m = SDL_CreateWindow(name_m.c_str(),SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,
                                   windowWidth_m,windowHeight_m,windowFlags);
    if(!sdlWindow_m){
        std::cout << "[game_engine_sdl] failed to open " << windowWidth_m << " x "
                  << windowHeight_m << " window : " << SDL_GetError() << std::endl;
        exit(1);
    }
    else {
        std::cout << "[game_engine_sdl] open " << windowWidth_m << " x "
                  << windowHeight_m << " window!" << std::endl;
    }

    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY,"linear");

    // SDL : configure renderer
    sdlRenderer_m = SDL_CreateRenderer(sdlWindow_m,-1,renderFlags);

    if(!sdlRenderer_m){
        std::cout << "[game_engine_sdl] failed to create SDL renderer : " << SDL_GetError() << std::endl;
        exit(1);
    }
    else {
        std::cout << "[game_engine_sdl] SDL renderer created!" << std::endl;
    }

}

void GameEngineSDL::ProcessInput() {
    SDL_Event event;

    while(SDL_PollEvent(&event)){
        switch(event.type){
            case SDLK_UP:
                std::cout << "[game_engine_sdl] UP has been pressed." << std::endl;
                break;

            case SDLK_DOWN:
                std::cout << "[game_engine_sdl] DOWN has been pressed." << std::endl;
                break;

            case SDLK_LEFT:
                std::cout << "[game_engine_sdl] LEFT has been pressed." << std::endl;
                break;

            case SDLK_RIGHT:
                std::cout << "[game_engine_sdl] RIGHT has been pressed." << std::endl;
                break;

            case SDL_QUIT:
                std::cout << "[game_engine_sdl] terminate the game!" << std::endl;
                exit(0);
                break;

            default:
                break;
        }
    }
}

void GameEngineSDL::SetupScene() {
    SDL_SetRenderDrawColor(sdlRenderer_m,16, 172, 132,1);//color https://flatuicolors.com/palette/ca
    SDL_RenderClear(sdlRenderer_m);
}

void GameEngineSDL::DisplayScene() {
    SDL_RenderPresent(sdlRenderer_m);
}



