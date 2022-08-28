//
// Created by oneshepherdssheep on 28/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_SINGLETON_H
#define CPP_DESIGN_PATTERNS_SINGLETON_H

#include <cstdint>
#include <random>

class Singleton{
public:
    static Singleton& GetInstance(){
        static Singleton *instance_m = new Singleton();
        return *instance_m;
    }

    /**
     * @brief Returns the id created during the instantiation (just for testing)
     * @return
     */
    int GetId() const { return id_m; }

private:
    Singleton(){ id_m = std::rand()/((RAND_MAX+1u)/10);} // get a number between [0-10] just for testing purpose;
    int id_m;
};

#endif //CPP_DESIGN_PATTERNS_SINGLETON_H
