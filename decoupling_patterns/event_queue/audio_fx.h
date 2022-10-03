//
// Created by oneshepherdssheep on 07/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_AUDIO_H
#define CPP_DESIGN_PATTERNS_AUDIO_H

#include <iostream>
#include <cstdint>
#include <mutex>
#include <thread>
#include "event.h"

template<std::size_t N>
class AudioFx {
public:
    explicit AudioFx():
            tailIndex_m{0},
            headIndex_m{0},
            mutex_m{}{
        std::cout << "[audio_fx] constructor called." << std::endl;
    }

    virtual ~AudioFx(){
        std::cout << "[audio_fx] destructor called." << std::endl;
    }

    inline bool isAudioQueueFull() const {
        return !((tailIndex_m+1)%N!=headIndex_m);
    }


    void playSound(audio_fx_event::AudioFxEvent fxSound){
        if(!isAudioQueueFull()){
            std::lock_guard<std::mutex> guard(mutex_m);
            queue_m[tailIndex_m] = fxSound;
            tailIndex_m = (tailIndex_m+1)%N;
        }
        else{
            std::cout << "[audio_fx:playSound] queue full." << std::endl;
        }
    }

    void update(){
        if(headIndex_m!=tailIndex_m){
            std::lock_guard<std::mutex> guard(mutex_m);
                std::cout << "[audio_fx:update] playing song [id : " << queue_m[headIndex_m].GetId()
                          << ", fx audio : " << queue_m[headIndex_m].GetFXSongID() << "] [head:" << headIndex_m
                          << ", tail: " << tailIndex_m << "]" << std::endl;
                headIndex_m = (headIndex_m+1)%N;
        }
        else{
            std::cout << "[audio_fx:update] queue empty" << std::endl;
        }
    }

private:
    audio_fx_event::AudioFxEvent queue_m[N];
    uint16_t tailIndex_m;
    uint16_t headIndex_m;
    std::mutex mutex_m; //-V730_NOINIT
};


#endif //CPP_DESIGN_PATTERNS_AUDIO_H
