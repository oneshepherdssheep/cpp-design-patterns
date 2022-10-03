//
// Created by oneshepherdssheep on 26/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_SUBJECT_H
#define CPP_DESIGN_PATTERNS_SUBJECT_H

#include <iostream>
#include <cstdlib>
#include <array>
#include "observer.h"
#include "observer_node.h"
#include "observer_node_pool.h"

template<std::size_t MAX_OBSERVER_COUNT>
class Subject {
public:
    Subject():
    nextIndex_m(0),
    headNode_m(nullptr),
    observerNodePool(){
        headNode_m = observerNodePool.CreateObserverNode();
    }

    bool AddObserver(Observer* observer){
        ObserverNode* node = headNode_m;
        ObserverNode* previousNode = headNode_m;

        // observer is already added
        if(node!=nullptr && node->GetObserver() == observer){
            return false;
        }

        // first node
        if(node!=nullptr && node->GetObserver()==nullptr){
            node->SetObserver(observer);
            return true;
        }

        // in list
        while(node!=nullptr){
            previousNode = node;
            node = node->GetNextNode();
            if(node == nullptr){
                node = observerNodePool.CreateObserverNode();
                if(node!=nullptr){
                    node->SetObserver(observer);
                    previousNode->SetNextNode(node);
                }
                else{
                    std::cout << "[subject] cannot add another observer." << std::endl;
                }
                break;
            }
        }

        return false;
    }

    bool RemoveObserver(const Observer* observer){
        ObserverNode* node = headNode_m;
        ObserverNode* previousNode = headNode_m;

        // first node
        if(node!=nullptr && node->GetObserver() == observer){
            node->SetObserver(nullptr);
            headNode_m = node->GetNextNode();
        }

        // in list
        while(node!=nullptr) {
            previousNode = node;
            node = node->GetNextNode();
            if (node != nullptr) {
                if (node->GetObserver() == observer) {
                    previousNode->SetNextNode(node->GetNextNode());
                    node->SetObserver(nullptr);
                    node->SetNextNode(nullptr);
                    break;
                }
            }
            else{
                break;
            }
        }

        return false;
    }

    void NotifyObservers(){
        ObserverNode* node = headNode_m;
        while(node!= nullptr){
            node->GetObserver()->OnNotify();
            node = node->GetNextNode();
        }
    }

    std::size_t GetObserverMaxCount() const {
        return MAX_OBSERVER_COUNT;
    }

private:
    std::size_t nextIndex_m;
    ObserverNode* headNode_m;
    ObserverNodePool<MAX_OBSERVER_COUNT> observerNodePool;
};


#endif //CPP_DESIGN_PATTERNS_SUBJECT_H
