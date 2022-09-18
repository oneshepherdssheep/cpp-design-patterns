//
// Created by oneshepherdssheep on 18/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_GAME_ENGINE_H
#define CPP_DESIGN_PATTERNS_GAME_ENGINE_H

#include <cstdint>
#include <iostream>

class GameEngine {

    public:
        enum KeyBoardEvent : std::uint8_t {
            NONE,
            UP,
            DOWN,
            LEFT,
            RIGHT,
            SPACE
        };

        virtual ~GameEngine(){};
        virtual void SetupScene() = 0;
        virtual void InitGraphics() = 0;
        virtual void DisplayScene() = 0;
        virtual void ProcessInput(GameEngine::KeyBoardEvent &keyboardEvent) = 0;
};

#endif //CPP_DESIGN_PATTERNS_GAME_ENGINE_H
