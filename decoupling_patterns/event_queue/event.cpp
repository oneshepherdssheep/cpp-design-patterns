//
// Created by oneshepherdssheep on 07/09/22.
//

#include "event.h"

Event::Event(uint16_t id) : id_m(id){
    //std::cout << "[event] constructor called." << std::endl;
}

Event::~Event(){
    //std::cout << "[event] destructor called." << std::endl;
}

uint16_t Event::GetId() const{
    return id_m;
}

audio_fx_event::AudioFxEvent::AudioFxEvent():
    Event(0),
    audioSongId_m(FX_TEST_SONG){
    //std::cout << "[audio_fx_event] constructor called." << std::endl;
}

audio_fx_event::AudioFxEvent::AudioFxEvent(uint16_t id, FxSongId audioSongId) :
    Event(id),
    audioSongId_m(audioSongId){
    //std::cout << "[audio_fx_event] constructor called." << std::endl;
}

audio_fx_event::AudioFxEvent::~AudioFxEvent(){
    //std::cout << "[audio_fx_event] destructor called." << std::endl;
}

audio_fx_event::FxSongId audio_fx_event::AudioFxEvent::GetFXSongID() const{
    return audioSongId_m;
}