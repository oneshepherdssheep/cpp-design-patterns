//
// Created by oneshepherdssheep on 25/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_TERRAIN_H
#define CPP_DESIGN_PATTERNS_TERRAIN_H

#include <string>
#include "texture.h"
#include "map_user.h"

/**
 *
 */
class Terrain {
public:
    Terrain();
    virtual bool IsAccessibleTo(const MapUser& mapUser) const = 0;
    virtual std::string Print() const = 0;

private:
    Texture texture_m;
};

/**
 *
 */
class RoadTerrain : public Terrain {
public:
    explicit RoadTerrain();
    bool IsAccessibleTo(const MapUser& mapUser) const override;
    std::string Print() const{ return std::string("r");};
};

/**
 *
 */
class LandTerrain : public Terrain  {
public:
    LandTerrain();
    bool IsAccessibleTo(const MapUser& mapUser) const override;
    std::string Print() const{ return std::string("l");};

};

/**
 *
 */
class MountainTerrain : public Terrain  {
public:
    MountainTerrain();
    bool IsAccessibleTo(const MapUser& mapUser) const override;
    std::string Print() const{ return std::string("m");};

};

/**
 *
 */
class WaterTerrain : public Terrain  {
public:
    WaterTerrain();
    bool IsAccessibleTo(const MapUser& mapUser) const override;
    std::string Print() const{ return std::string("w");};

};

/**
 *
 */
class EnclosedAreaTerrain : public Terrain  {
public:
    EnclosedAreaTerrain();
    bool IsAccessibleTo(const MapUser& mapUser) const override;
    std::string Print() const{ return std::string("e");};

};


#endif //CPP_DESIGN_PATTERNS_TERRAIN_H
