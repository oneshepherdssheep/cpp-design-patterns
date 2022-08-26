//
// Created by oneshepherdssheep on 26/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_OBSERVERNODE_H
#define CPP_DESIGN_PATTERNS_OBSERVERNODE_H

#include "observer.h"

class ObserverNode {

public:

    ObserverNode() :
    observer_m(nullptr){

    }

    bool IsInUse(){
        return observer_m!= nullptr;
    }

    ObserverNode* GetNextNode(){
        return next_m;
    }

    void SetNextNode(ObserverNode* node){
        next_m = node;
    }

    Observer* GetObserver(){
        return observer_m;
    }

    void SetObserver(Observer* observer){
        observer_m = observer;
    }

private:
    ObserverNode* next_m;
    Observer* observer_m;
};


#endif //CPP_DESIGN_PATTERNS_OBSERVERNODE_H
