//
// Created by oneshepherdssheep on 26/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_OBSERVER_NODE_POOL_H
#define CPP_DESIGN_PATTERNS_OBSERVER_NODE_POOL_H

#include <cstdlib>
#include <cstdint>
#include "observer_node.h"

template<std::size_t OBSERVER_NODE_COUNT>
class ObserverNodePool {
public:
    ObserverNodePool(){
        for(std::size_t index = 0; index < OBSERVER_NODE_COUNT; index++){
            list_m[index].SetNextNode(nullptr);
            list_m[index].SetObserver(nullptr);
        }
    };
    ObserverNode* CreateObserverNode(){
        for(std::size_t index = 0; index < OBSERVER_NODE_COUNT; index++){
            if(!list_m[index].IsInUse()){
                return &list_m[index];
            }
        }
        return nullptr;
    }
private:
    ObserverNode list_m[OBSERVER_NODE_COUNT];
};


#endif //CPP_DESIGN_PATTERNS_OBSERVER_NODE_POOL_H
