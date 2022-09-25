//
// Created by oneshepherdssheep on 25/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_GAME_ENGINE_BASIC_H
#define CPP_DESIGN_PATTERNS_GAME_ENGINE_BASIC_H

#include "game_engine.h"

class GameEngineBasic : public GameEngine {
public:
    explicit GameEngineBasic(const char * name,int windowWidth,int windowHeight);
    ~GameEngineBasic();
    void SetupScene() override;
    void InitGraphics() override;
    void DisplayScene() override;
    void ProcessInput() override;
    GameEngine::KeyBoardEvent GetLastKeyboardEvent() const override;

private:
    int windowWidth_m;
    int windowHeight_m;
    std::string name_m;
    GameEngine::KeyBoardEvent keyboardEvent_m;
};


#endif //CPP_DESIGN_PATTERNS_GAME_ENGINE_BASIC_H
