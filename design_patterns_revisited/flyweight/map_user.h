//
// Created by oneshepherdssheep on 25/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_MAP_USER_H
#define CPP_DESIGN_PATTERNS_MAP_USER_H

#include <cstdint>

/**
 *
 */
class MapUser {
public:
    MapUser();
    std::size_t GetX() const { return x_m; };
    std::size_t GetY() const { return y_m; };
    void MoveTo(const std::size_t x,std::size_t y){ x_m = x; y_m = y;};
    void MoveX(const std::size_t x){ x_m = x;};
    void MoveY(const std::size_t y){ y_m = y;};
    virtual std::uint16_t GetVelocity() const = 0;
    virtual bool CanAccessLand() const { return false; };
    virtual bool CanAccessRoad() const { return false; };
    virtual bool CanAccessMountain() const { return false; };
    virtual bool CanAccessWater() const { return false; };
    virtual bool CanAccessEnclosedArea() const { return false; };
private:
    std::size_t x_m;
    std::size_t y_m;
};

/**
 *
 */
class Human : public MapUser {
public:
    static constexpr std::uint16_t HUMAN_VELOCITY = 2;
    Human();
    std::uint16_t GetVelocity() const override{ return HUMAN_VELOCITY;};
    bool CanAccessLand() const override { return true; };
    bool CanAccessMountain() const override { return true; };
    bool CanAccessEnclosedArea() const override { return true; };
};

/**
 *
 */
class LandVehicle : public MapUser {
public:
    static constexpr std::uint16_t LAND_VEHICLE_VELOCITY = 4;
    LandVehicle();
    std::uint16_t  GetVelocity() const override { return LAND_VEHICLE_VELOCITY; };
    bool CanAccessLand() const override { return true; };
    bool CanAccessRoad() const override { return true; };
};


/**
 *
 */
class AirVehicle : public MapUser {
public:
    static constexpr std::uint16_t AIR_VEHICLE_VELOCITY = 8;
    AirVehicle();
    std::uint16_t  GetVelocity() const override { return AIR_VEHICLE_VELOCITY; };
    bool CanAccessLand() const override { return true; };
    bool CanAccessRoad() const override { return true; };
    bool CanAccessMountain() const override { return true; };
    bool CanAccessWater() const override { return true; };
};

/**
 *
 */
class NavalVehicle : public MapUser {
public:
    static constexpr std::uint16_t AIR_VEHICLE_VELOCITY = 8;
    NavalVehicle();
    std::uint16_t  GetVelocity() const override { return AIR_VEHICLE_VELOCITY;};
    bool CanAccessWater() const override { return true; };
};


#endif //CPP_DESIGN_PATTERNS_MAP_USER_H
