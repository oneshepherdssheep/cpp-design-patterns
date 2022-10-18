//
// Created by betzalel on 18/10/22.
//

#ifndef CPP_DESIGN_PATTERNS_REMAININGDRIVINGDISTANCEALGORITHM_H
#define CPP_DESIGN_PATTERNS_REMAININGDRIVINGDISTANCEALGORITHM_H

#include "../car/car_fwd.h"

class RDDA {
public:
    RDDA(){};
    virtual ~RDDA(){};
    virtual int getDistance(const Car& car) const = 0;
};

#endif //CPP_DESIGN_PATTERNS_REMAININGDRIVINGDISTANCEALGORITHM_H
