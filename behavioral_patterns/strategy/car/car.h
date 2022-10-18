//
// Created by betzalel on 18/10/22.
//

#ifndef CPP_DESIGN_PATTERNS_CAR_H
#define CPP_DESIGN_PATTERNS_CAR_H

#include <iostream>
#include "../remaining_driving_distance_algorithm/rdda_fwd.h"

class Car {
public:
    explicit Car(int batMaxLevel,RDDA * rdda);
    ~Car();
    virtual void drive() = 0;
    void startEngine();
    int getBatteryLevelMax() const;
    void printRemaingDrivingDistance();
private:
    virtual void doStartEngine();
    int batteryLevelMax_m;
    RDDA * rdda_m;
};

#endif //CPP_DESIGN_PATTERNS_CAR_H
