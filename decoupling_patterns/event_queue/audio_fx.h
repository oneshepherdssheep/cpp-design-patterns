//
// Created by oneshepherdssheep on 07/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_AUDIO_H
#define CPP_DESIGN_PATTERNS_AUDIO_H

#include <iostream>
#include <cstdint>
#include "event.h"

template<std::size_t N>
class AudioFx {
public:
    AudioFx(){std::cout << "[audio] constructor called." << std::endl;}
    virtual ~AudioFx(){std::cout << "[audio] destructor called." << std::endl;}
    void playSound();
    void update();
private:
    audio_fx_event::AudioFxEvent queue_m[N];
    uint16_t tailIndex_m;
    uint16_t headIndex_m;
};


#endif //CPP_DESIGN_PATTERNS_AUDIO_H
