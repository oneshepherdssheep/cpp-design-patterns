//
// Created by oneshepherdssheep on 25/08/22.
//

#include "terrain.h"

namespace terrain {

// Terrain
    terrain::Terrain::Terrain() = default;

// RoadTerrain
    terrain::RoadTerrain::RoadTerrain() = default;

    bool terrain::RoadTerrain::IsAccessibleTo(const map_user::MapUser &mapUser) const {
        return mapUser.CanAccessRoad();
    }

// LandTerrain
    terrain::LandTerrain::LandTerrain() = default;

    bool terrain::LandTerrain::IsAccessibleTo(const map_user::MapUser &mapUser) const {
        return mapUser.CanAccessLand();
    }

// MountainTerrain
    terrain::MountainTerrain::MountainTerrain() = default;

    bool terrain::MountainTerrain::IsAccessibleTo(const map_user::MapUser &mapUser) const {
        return mapUser.CanAccessMountain();
    }

// EnclosedAreaTerrain
    terrain::EnclosedAreaTerrain::EnclosedAreaTerrain() = default;

    bool terrain::EnclosedAreaTerrain::IsAccessibleTo(const map_user::MapUser &mapUser) const {
        return mapUser.CanAccessEnclosedArea();
    }

// WaterTerrain
    terrain::WaterTerrain::WaterTerrain() = default;

    bool terrain::WaterTerrain::IsAccessibleTo(const map_user::MapUser &mapUser) const {
        return mapUser.CanAccessWater();
    }
}

