//
// Created by oneshepherdssheep on 25/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_CARLIB_H
#define CPP_DESIGN_PATTERNS_CARLIB_H

#include <cstdint>
#include <iostream>

enum CarCommandId : std::uint16_t {
    TURN_LEFT = 0,
    TURN_RIGHT,
    PARK,
    DRIVE,
    REVERSE,
    HONK,
    START_ENGINE,
    STOP_ENGINE,
    // Please add new commands above this live
    COMMAND_COUNT,
};
/**
 *
 */
enum CarDirection : std::uint8_t {
    LEFT,
    RIGHT,
    FORWARD,
    BACKWARD
};

/**
 *
 */
enum EngineState : std::uint8_t {
    STOPPED,
    STARTING,
    RUNNING,
    STOPPING
};

/**
 *
 */
class Car {

public:
    explicit Car(const uint64_t id);
    void TurnLeft();
    void TurnRight();
    void Park();
    void Drive();
    void Reverse();
    void Honk();
    void StartEngine();
    void StopEngine();
    const std::string PrintCarIdentification() const;

private:
    CarDirection direction_m;
    EngineState engineState_m;
    bool hornState_m;
    uint64_t id_m;
};

#endif //CPP_DESIGN_PATTERNS_CARLIB_H
