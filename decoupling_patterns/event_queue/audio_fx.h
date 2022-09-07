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
    explicit AudioFx():
            tailIndex_m(0),
            headIndex_m(0){
        std::cout << "[audio_fx] constructor called." << std::endl;
        InitializeMutex();
    }

    virtual ~AudioFx(){
        std::cout << "[audio_fx] destructor called." << std::endl;
        int returnedCode = pthread_mutex_destroy(&mutex_m);
        if(returnedCode!=0){
            std::cout << "[audio_fx:destructor] mutex destroy error" << std::endl;
        }
    }

    inline bool isAudioQueueFull() const {
        return !((tailIndex_m+1)%N!=headIndex_m);
    }


    void playSound(audio_fx_event::AudioFxEvent fxSound){
        if(!isAudioQueueFull()){
            int returnedCode = pthread_mutex_lock(&mutex_m);
            if(returnedCode!=0) {
                std::cout << "[audio_fx:playSound] mutex lock error" << std::endl;
            }
            else{
                queue_m[tailIndex_m] = fxSound;
                tailIndex_m = (tailIndex_m+1)%N;
                returnedCode = pthread_mutex_unlock(&mutex_m);
                if(returnedCode!=0){
                    std::cout << "[audio_fx:playSound] mutex unlock error" << std::endl;
                }
            }

        }
        else{
            std::cout << "[audio_fx:playSound] queue full." << std::endl;
        }
    }

    void update(){
        if(headIndex_m!=tailIndex_m){
            int returnedCode = pthread_mutex_lock(&mutex_m);
            if(returnedCode!=0){
                std::cout << "[audio_fx:update] mutex lock error" << std::endl;
            }
            else{
                std::cout << "[audio_fx:update] playing song [id : " << queue_m[headIndex_m].GetId()
                          << ", fx audio : " << queue_m[headIndex_m].GetFXSongID() << "] [head:" << headIndex_m
                          << ", tail: " << tailIndex_m << "]" << std::endl;
                headIndex_m = (headIndex_m+1)%N;
                returnedCode = pthread_mutex_unlock(&mutex_m);
                if(returnedCode!=0){
                    std::cout << "[audio_fx:update] mutex unlock error" << std::endl;
                }
            }
        }
        else{
            std::cout << "[audio_fx:update] queue empty" << std::endl;
        }
    }

private:
    audio_fx_event::AudioFxEvent queue_m[N];
    uint16_t tailIndex_m;
    uint16_t headIndex_m;
    pthread_mutex_t mutex_m;

    void InitializeMutex(){
        int returnedCode;
        // 1 - initialize mutex attribute
        pthread_mutexattr_t mutexAttribute;
        returnedCode = pthread_mutexattr_init(&mutexAttribute);
        if(returnedCode!=0){
            std::cout << "[audio_fx:initializemutex] mutex attribute NOT initialized." << std::endl;
            return;
        }
        else{
            std::cout << "[audio_fx:initializemutex] mutex attribute initialized." << std::endl;
        }

        // 2 - set mutex attribute robust
        returnedCode = pthread_mutexattr_setrobust(&mutexAttribute,PTHREAD_MUTEX_ROBUST);
        if(returnedCode!=0){
            std::cout << "[audio_fx:initializemutex] mutex type NOT initialized." << std::endl;
            return;
        }
        else{
            std::cout << "[audio_fx:initializemutex] mutex type initialized." << std::endl;
        }

        // 3 - set mutex attribute type
        returnedCode = pthread_mutexattr_settype(&mutexAttribute,PTHREAD_MUTEX_RECURSIVE);
        if(returnedCode!=0){
            std::cout << "[audio_fx:initializemutex] mutex type NOT initialized." << std::endl;
            return;
        }
        else{
            std::cout << "[audio_fx:initializemutex] mutex type initialized." << std::endl;
        }

        // 4 - set mutex attribute setpshared
        returnedCode = pthread_mutexattr_setpshared(&mutexAttribute,PTHREAD_PROCESS_SHARED);
        if(returnedCode!=0){
            std::cout << "[audio_fx:initializemutex] mutex setpshared status NOT initialized." << std::endl;
            return;
        }
        else{
            std::cout << "[audio_fx:initializemutex] mutex setpshared status initialized." << std::endl;
        }

        // 5 - initialize mutex
        returnedCode = pthread_mutex_init(&mutex_m,&mutexAttribute);
        if(returnedCode!=0){
            std::cout << "[audio_fx:initializemutex] mutex NOT initialized." << std::endl;
            return;
        }
        else{
            std::cout << "[audio_fx:initializemutex] mutex initialized." << std::endl;
        }

        // 6 - destroy mutex attribute
        returnedCode = pthread_mutexattr_destroy(&mutexAttribute);
        if(returnedCode!=0){
            std::cout << "[audio_fx:initializemutex] mutex attribute NOT destroyed." << std::endl;
            return;
        }
        else{
            std::cout << "[audio_fx:initializemutex] mutex attribute destroyed." << std::endl;
        }
    }
};


#endif //CPP_DESIGN_PATTERNS_AUDIO_H
