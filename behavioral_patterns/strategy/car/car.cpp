//
// Created by betzalel on 18/10/22.
//

#include "car.h"
#include "../remaining_driving_distance_algorithm/rdda.h"

Car::Car(int batMaxLevel,RDDA * rdda):
batteryLevelMax_m{batMaxLevel},
rdda_m{rdda}{
    std::cout << "car ctor invoked." << '\n';
};

Car::~Car(){
    std::cout << "car dtor invoked." << '\n';
};

void Car::startEngine(){
    doStartEngine();
}

int Car::getBatteryLevelMax() const{
    return batteryLevelMax_m;
}

void Car::printRemaingDrivingDistance(){
    std::cout << "You have " << rdda_m->getDistance(*this) << " km left" << '\n';
}

void Car::doStartEngine(){
    std::cout << "default start!" << '\n';
}

void Car::drive(){
    std::cout << "default car drive impl." << '\n';
}
