//
// Created by oneshepherdssheep on 25/08/22.
//

#include <iostream>
#include <cstdlib>
#include "map.h"


int main(int argc, char * argv[]){
    Map<14,19> itsWar;
    itsWar.GenerateWorld();
    itsWar.Print();
    return EXIT_SUCCESS;
}