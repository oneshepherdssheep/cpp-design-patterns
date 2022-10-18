//
// Created by betzalel on 18/10/22.
//

#ifndef CPP_DESIGN_PATTERNS_SUPRA_H
#define CPP_DESIGN_PATTERNS_SUPRA_H

#include "car.h"

class Supra : public Car {
public:
    Supra(int batMaxLevel,RDDA * rdda):
    Car(batMaxLevel,rdda){}
    virtual void drive(){
        std::cout << "drive like a supra" << '\n';
    }
private:
    virtual void doStartEngine(){
        std::cout << "supra starts differently!" << '\n';
    }
};

#endif //CPP_DESIGN_PATTERNS_SUPRA_H
