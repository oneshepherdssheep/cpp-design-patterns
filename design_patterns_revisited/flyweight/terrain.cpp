//
// Created by oneshepherdssheep on 25/08/22.
//

#include "terrain.h"

// Terrain
Terrain::Terrain() {

}

// RoadTerrain
RoadTerrain::RoadTerrain(){

}

bool RoadTerrain::IsAccessibleTo(const MapUser& mapUser) const {
    return mapUser.CanAccessRoad();
}

// LandTerrain
LandTerrain::LandTerrain(){

}

bool LandTerrain::IsAccessibleTo(const MapUser &mapUser) const {
    return mapUser.CanAccessLand();
}

// MountainTerrain
MountainTerrain::MountainTerrain(){

}

bool MountainTerrain::IsAccessibleTo(const MapUser &mapUser) const {
    return mapUser.CanAccessMountain();
}

// EnclosedAreaTerrain
EnclosedAreaTerrain::EnclosedAreaTerrain(){

}

bool EnclosedAreaTerrain::IsAccessibleTo(const MapUser &mapUser) const {
    return mapUser.CanAccessEnclosedArea();
}

// WaterTerrain
WaterTerrain::WaterTerrain(){

}

bool WaterTerrain::IsAccessibleTo(const MapUser& mapUser) const {
    return mapUser.CanAccessWater();
}
