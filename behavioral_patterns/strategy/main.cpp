//
// Created by betzalel on 18/10/22.
//

#include <vector>
#include "car/camry.h"
#include "car/corolla.h"
#include "car/supra.h"
#include "remaining_driving_distance_algorithm/rdda_v2.h"
#include "remaining_driving_distance_algorithm/rdda_v3.h"

int main(){
    RDDA_v2 rdda_m;
    RDDA_v3 rddav3_m;
    Camry camry_m(40,&rdda_m);
    Corolla corolla_m(80,&rdda_m);
    Supra supra_m(35,&rddav3_m);
    std::vector<Car*> cars_m;
    cars_m.push_back(&camry_m);
    cars_m.push_back(&corolla_m);
    cars_m.push_back(&supra_m);
    for(std::vector<Car*>::iterator iter = cars_m.begin() ;iter != cars_m.end();++iter){
        (*iter)->startEngine();
        (*iter)->printRemaingDrivingDistance();
        (*iter)->drive();
    }
}

