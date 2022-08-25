//
// Created by oneshepherdssheep on 25/08/22.
//

#include "car_command_handler.h"

CarCommandHandler::CarCommandHandler(){
    turnLeftCommand_m = new TurnLeftCommand();
    turnRightCommand_m = new TurnRightCommand();
    parkCommand_m = new ParkCommand();
    driveCommand_m = new DriveCommand();
    reverseCommand_m = new ReverseCommand();
    honkCommand_m = new HonkCommand();
    startEngineCommand_m = new StartEngineCommand();
    stopEngineCommand_m = new StopEngineCommand();
    std::cout << "[car_command_handler] instantiated." << std::endl;
}

CommandV2<Car>* CarCommandHandler::GetCurrentCommand(){
    int command_id = std::rand()/((RAND_MAX+1u)/COMMAND_COUNT);
    switch(command_id){
        case TURN_LEFT:
            return turnLeftCommand_m;
            break;
        case TURN_RIGHT:
            return turnRightCommand_m;
            break;
        case PARK:
            return parkCommand_m;
            break;
        case DRIVE:
            return driveCommand_m;
            break;
        case REVERSE:
            return reverseCommand_m;
            break;
        case HONK:
            return honkCommand_m;
            break;
        case START_ENGINE:
            return startEngineCommand_m;
            break;
        case STOP_ENGINE:
            return stopEngineCommand_m;
            break;
        default:
            return nullptr;
            break;
    }
}