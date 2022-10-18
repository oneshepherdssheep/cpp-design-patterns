//
// Created by betzalel on 18/10/22.
//

#ifndef CPP_DESIGN_PATTERNS_COROLLA_H
#define CPP_DESIGN_PATTERNS_COROLLA_H

#include "car.h"

class Corolla : public Car {
public:
    Corolla(int batMaxLevel,RDDA * rdda):
            Car(batMaxLevel,rdda){}
    virtual void drive(){
        Car::drive();
    }

};

#endif //CPP_DESIGN_PATTERNS_COROLLA_H
