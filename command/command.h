//
// Created by oneshepherdssheep on 25/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_COMMAND_H
#define CPP_DESIGN_PATTERNS_COMMAND_H

template<typename T>
class CommandV2 {
public :
    CommandV2(){};
    virtual void execute(T& thing) = 0;
};

class CommandV1 {
public :
    CommandV1(){};
    virtual void execute() = 0;
};


#endif //CPP_DESIGN_PATTERNS_COMMAND_H
