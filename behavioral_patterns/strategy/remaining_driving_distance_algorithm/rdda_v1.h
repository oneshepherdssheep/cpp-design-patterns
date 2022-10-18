//
// Created by betzalel on 18/10/22.
//

#ifndef CPP_DESIGN_PATTERNS_REMAINING_DRIVING_DISTANCE_ALGORITHM_V1_H
#define CPP_DESIGN_PATTERNS_REMAINING_DRIVING_DISTANCE_ALGORITHM_V1_H

#include "rdda.h"
#include "../car/car.h"

class RDDA_v1 : public RDDA {
public:
    virtual int getDistance(const Car& car) const{
        return (car.getBatteryLevelMax()*40/2);
    }
};

#endif //CPP_DESIGN_PATTERNS_REMAINING_DRIVING_DISTANCE_ALGORITHM_V1_H
