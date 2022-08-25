//
// oneshepherdssheep
//

#include <thread>
#include <iostream>
#include "car_command.h"
#include "car_command_handler.h"

int main() {
    Car toyoto(1);
    CarCommandHandler commandHandler;
    while(1){
        CommandV2<Car>* command = commandHandler.GetCurrentCommand();
        if(command!= nullptr){
            command->execute(toyoto);
        }
        else{
            std::cout << "[command] no command received." << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}