//
// Created by oneshepherdssheep on 25/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_CAR_COMMAND_H
#define CPP_DESIGN_PATTERNS_CAR_COMMAND_H

#include "command.h"
#include "carlib.h"

class TurnLeftCommand : public CommandV2<Car> {
public:
    TurnLeftCommand();
    void execute(Car& car) override;
};

class TurnRightCommand : public CommandV2<Car> {
public:
    TurnRightCommand();
    void execute(Car& car) override;
};

class ParkCommand : public CommandV2<Car> {
public:
    ParkCommand();
    void execute(Car& car) override;
};

class DriveCommand : public CommandV2<Car> {
public:
    DriveCommand();
    void execute(Car& car) override;
};

class ReverseCommand : public CommandV2<Car> {
public:
    ReverseCommand();
    void execute(Car& car) override ;
};

class HonkCommand : public CommandV2<Car> {
public:
    HonkCommand();
    void execute(Car& car) override;
};

class StartEngineCommand : public CommandV2<Car> {
public:
    StartEngineCommand();
    void execute(Car& car) override;
};

class StopEngineCommand : public CommandV2<Car> {
public:
    StopEngineCommand();
    void execute(Car& car) override;
};

#endif //CPP_DESIGN_PATTERNS_CAR_COMMAND_H
