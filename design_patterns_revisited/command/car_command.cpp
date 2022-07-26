// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com
//
// Created by oneshepherdssheep on 25/08/22.
//

#include "car_command.h"

TurnLeftCommand::TurnLeftCommand(){

}

void TurnLeftCommand::execute(Car& car) {
    car.TurnLeft();
}

TurnRightCommand::TurnRightCommand(){

}

void TurnRightCommand::execute(Car& car) {
    car.TurnRight();
}

ParkCommand::ParkCommand(){

}

void ParkCommand::execute(Car& car) {
    car.Park();
}

DriveCommand::DriveCommand(){

}

void DriveCommand::execute(Car& car) {
    car.Drive();
}

ReverseCommand::ReverseCommand(){

}

void ReverseCommand::execute(Car& car) {
    car.Reverse();
}

HonkCommand::HonkCommand(){

}

void HonkCommand::execute(Car& car) {
    car.Honk();
}


StartEngineCommand::StartEngineCommand(){

}

void StartEngineCommand::execute(Car& car) {
    car.StartEngine();
}

StopEngineCommand::StopEngineCommand(){

}

void StopEngineCommand::execute(Car& car) {
    car.StopEngine();
}