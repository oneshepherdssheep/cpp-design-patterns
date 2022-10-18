//
// Created by betzalel on 18/10/22.
//

#ifndef CPP_DESIGN_PATTERNS_CAMRY_H
#define CPP_DESIGN_PATTERNS_CAMRY_H

#include "car.h"

class Camry : public Car {
public:
    Camry(int batMaxLevel,RDDA * rdda):
            Car(batMaxLevel,rdda){}
    virtual void drive(){
        Car::drive();
    }
};

#endif //CPP_DESIGN_PATTERNS_CAMRY_H
