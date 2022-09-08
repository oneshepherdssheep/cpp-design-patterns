//
// Created by oneshepherdssheep on 08/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_SPAWNER_H
#define CPP_DESIGN_PATTERNS_SPAWNER_H

#include "unit.h"
#include <iostream>

/**
 *
 */
class Spawner {
public:
    explicit Spawner(Unit* prototype): prototype_m(prototype){std::cout << "[spawner-v1] spawner created" << std::endl;}
    virtual ~Spawner(){std::cout << "[spawner] spawner deleted" << std::endl;};
    Unit* spawnUnit(){ return prototype_m->Clone(); }
private:
    Unit* prototype_m;
};

/**
 *
 */
typedef Unit* (*SpawnCallback)();

class SpawnerV2 {
public:
    explicit SpawnerV2(SpawnCallback spawnCallback): spawnCallback_m(spawnCallback){std::cout << "[spawner-v2] spawner created" << std::endl;}
    Unit* spawnUnit(){ return spawnCallback_m();}
private:
    SpawnCallback spawnCallback_m;
};

/**
 *
 * @tparam T
 */
template<typename T>
class SpawnerV3 {
public:
    SpawnerV3(){std::cout << "[spawner-v3] spawner created" << std::endl;}
    T* spawnUnit(){ return new T();}
};

#endif //CPP_DESIGN_PATTERNS_SPAWNER_H
