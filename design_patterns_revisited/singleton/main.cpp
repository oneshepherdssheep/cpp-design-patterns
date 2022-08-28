//
// Created by oneshepherdssheep on 28/08/22.
//

#include "singleton.h"
#include <iostream>

void DoSomething(){
    std::cout << "[DoSomething] singleton id : " << Singleton::GetInstance().GetId() << std::endl;
}

void DoSomethingElse(){
    std::cout << "[DoSomethingElse] singleton id : " << Singleton::GetInstance().GetId() << std::endl;
}

void DoAnotherThing(){
    std::cout << "[DoAnotherThing] singleton id : " << Singleton::GetInstance().GetId() << std::endl;
}

void DoANewThing(){
    std::cout << "[DoANewThing] singleton id : " << Singleton::GetInstance().GetId() << std::endl;
}

int main(){
    std::cout << "[singleton] id " << Singleton::GetInstance().GetId() << std::endl;
    DoSomething();
    DoSomethingElse();
    DoAnotherThing();
    DoANewThing();
    return EXIT_SUCCESS;
}