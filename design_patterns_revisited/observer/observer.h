//
// Created by oneshepherdssheep on 26/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_OBSERVER_H
#define CPP_DESIGN_PATTERNS_OBSERVER_H

#include <string>
#include <iostream>

/**
 *
 */
class Observer {
public:
    Observer(){}
    virtual void OnNotify() = 0;
};

/**
 *
 */
class LivingCreature : public Observer {
public:
    explicit LivingCreature(std::string name,std::uint16_t id):
    name_m(name),
    id_m(id)
    {
        std::cout <<"[creature::"<< PrintName()<<"] is born." << std::endl;
    }

    std::string PrintName(){
        return std::string(name_m+"-"+std::to_string(id_m));
    }

private:
    std::string name_m;
    std::uint16_t id_m;
};

/**
 *
 */
class Animal : public LivingCreature {
public:
    explicit Animal(std::string name,std::uint16_t id):
            LivingCreature(name,id)
    {
        std::cout <<"[animal::"<< PrintName()<<"] is born." << std::endl;
    }

    void OnNotify() override {
        std::cout <<"[animal::"<< PrintName()<<"]" << " sees the sun, then prepares to hunt." << std::endl;
    }
};

/**
 *
 */
class Human : public LivingCreature {
public:
    explicit Human(std::string name,std::uint16_t id):
            LivingCreature(name,id)
    {
        std::cout << "[human::" << PrintName() << "] is born." << std::endl;
    }

    void OnNotify() override {
        std::cout << "[human::" << PrintName() << "] sees the sun, then prepares to work." << std::endl;
    }
};


#endif //CPP_DESIGN_PATTERNS_OBSERVER_H
