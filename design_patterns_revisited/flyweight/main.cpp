// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com
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