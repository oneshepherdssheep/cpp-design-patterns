//
// Created by oneshepherdssheep on 25/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_CAR_COMMAND_HANDLER_H
#define CPP_DESIGN_PATTERNS_CAR_COMMAND_HANDLER_H

#include "carlib.h"
#include "command.h"
#include "car_command.h"

class CarCommandHandler {

public:
    CarCommandHandler();
    CommandV2<Car>* GetCurrentCommand();

private:
    TurnLeftCommand *turnLeftCommand_m;
    TurnRightCommand *turnRightCommand_m;
    ParkCommand* parkCommand_m;
    DriveCommand* driveCommand_m;
    ReverseCommand* reverseCommand_m;
    HonkCommand* honkCommand_m;
    StartEngineCommand* startEngineCommand_m;
    StopEngineCommand* stopEngineCommand_m;
};


#endif //CPP_DESIGN_PATTERNS_CAR_COMMAND_HANDLER_H
