//
// Created by oneshepherdssheep on 25/08/22.
//

#include "carlib.h"


Car::Car(const uint64_t id):
id_m(id){
    std::cout << PrintCarIdentification() << " instantiated." << std::endl;
}

const std::string Car::PrintCarIdentification() const {
    return std::string("[car : #"+ std::to_string(id_m)+"]");
}

void Car::Honk() {
    std::cout << PrintCarIdentification() << " honk." << std::endl;
}

void Car::StartEngine() {
    if(engineState_m!= RUNNING){
        // here actions to start the engine
        std::cout << PrintCarIdentification() << " engine starting." << std::endl;
    }
    else{
        std::cout << PrintCarIdentification() << " engine already running." << std::endl;
    }
}

void Car::StopEngine() {
    if(engineState_m!= STOPPED){
        // here actions to stop the engine
        std::cout << PrintCarIdentification() << " engine stopping." << std::endl;
    }
    else{
        std::cout << PrintCarIdentification() << " engine already stopped." << std::endl;
    }
}

void Car::TurnLeft() {
    if(direction_m!=LEFT){
        // here actions to turn left
        std::cout << PrintCarIdentification() << " turning left." << std::endl;
    }
    else{
        std::cout << PrintCarIdentification() << " already turning left." << std::endl;
    }
}

void Car::TurnRight() {
    if(direction_m!=RIGHT){
        // here actions to turn left
        std::cout << PrintCarIdentification() << " turning right." << std::endl;
    }
    else{
        std::cout << PrintCarIdentification() << " already turning right." << std::endl;
    }
}

void Car::Park() {
    std::cout << PrintCarIdentification() << " park." << std::endl;
}

void Car::Reverse() {
    std::cout << PrintCarIdentification() << " reverse." << std::endl;
}

void Car::Drive() {
    std::cout << PrintCarIdentification() << " drive." << std::endl;
}
