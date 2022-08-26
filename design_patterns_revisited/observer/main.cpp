//
// Created by oneshepherdssheep on 26/08/22.
//

#include <cstdlib>
#include <iostream>
#include "subject.h"
#include "observer.h"

static constexpr std::size_t ANIMAL_MAX_COUNT = 25;
static constexpr std::size_t HUMAN_MAX_COUNT = 25;

int main(){
    Subject<ANIMAL_MAX_COUNT+HUMAN_MAX_COUNT> sunRising;
    Subject<HUMAN_MAX_COUNT> sunFalling;

    // animal
    Animal *animals[ANIMAL_MAX_COUNT];
    for(std::size_t i = 0; i < ANIMAL_MAX_COUNT; i++){
        animals[i] = new Animal("beast",i);
        sunRising.AddObserver(animals[i]);
    }

    // human
    Human *humans[HUMAN_MAX_COUNT];
    for(std::size_t i = 0; i < HUMAN_MAX_COUNT; i++){
        if(i%2==0){
            humans[i] = new Human("joe",i);
        }
        else{
            humans[i] = new Human("jane",i);
        }
        sunRising.AddObserver(humans[i]);
        sunFalling.AddObserver(humans[i]);
    }

    // notify
    sunRising.NotifyObservers();

    // remove all humans except the last 2
    for(std::size_t i = 0; i < HUMAN_MAX_COUNT-2; i++){
        sunRising.RemoveObserver(humans[i]);
    }

    for(std::size_t i = 0; i < HUMAN_MAX_COUNT-2; i++){
        sunFalling.RemoveObserver(humans[i]);
    }

    // notify
    sunRising.NotifyObservers();
    sunFalling.NotifyObservers();
    return EXIT_SUCCESS;
}