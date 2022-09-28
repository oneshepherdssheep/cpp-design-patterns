// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com
//
// Created by oneshepherdssheep on 07/09/22.
//

#include <cstdio>
#include <cmath>
#include <thread>
#include "event.h"
#include "audio_fx.h"
#include "gamelib.h"

static const uint16_t EVENT_GENERATORS_THREADS_COUNT = 10;
static AudioFx<20> audioEngine;

/**
 *
 * @param arg
 * @return
 */
static void * EventGeneratorProcess(void *arg){
    while(1){
        std::size_t id = gamelib::GetDiceRoll<255>();
        audio_fx_event::FxSongId songId = (audio_fx_event::FxSongId)gamelib::GetDiceRoll<audio_fx_event::FX_SONG_COUNT>();
        //
        if(!audioEngine.isAudioQueueFull()){
            audio_fx_event::AudioFxEvent audioEvent(id,songId);
            audioEngine.playSound(audioEvent);
            std::cout << "[thread:" << pthread_self() << "] asked to play song [id : " << id << ", fx audio : " << songId <<"] "<< std::endl;
        }
        //
        std::this_thread::sleep_for(std::chrono::milliseconds ((id+1)*10));
    }
}


static void * AudioEngineProcess(void *arg){
    while(1){
        audioEngine.update();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

/**
 *
 * @param argc
 * @param argv
 * @return
 */
int main(int argc,char * argv[]){
    // Threads
    pthread_t eventGeneratorsThreads[EVENT_GENERATORS_THREADS_COUNT];
    pthread_t audioEngineThread;
    int returnedCode;

    // Threads creation
    for(uint16_t i = 0; i < EVENT_GENERATORS_THREADS_COUNT; i++){
        returnedCode = pthread_create(&eventGeneratorsThreads[i], nullptr,EventGeneratorProcess,(void*)"EventGenerators\n");
        if(returnedCode!=0){
            std::cout << "[event_queue:main] failed to create thread #" << i  << std::endl;
        }
    }

    returnedCode = pthread_create(&audioEngineThread, nullptr,AudioEngineProcess,(void*)"AudioEngineProcess\n");
    if(returnedCode!=0){
        std::cout << "[event_queue:main] failed to create audio engine thread " << std::endl;
    }

    // Main loop
    while(1){
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return EXIT_SUCCESS;
}