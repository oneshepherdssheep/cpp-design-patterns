//
// Created by oneshepherdssheep on 25/08/22.
//

#ifndef CPP_DESIGN_PATTERNS_MAP_H
#define CPP_DESIGN_PATTERNS_MAP_H

#include "terrain.h"
#include "map_user.h"
#include "gamelib.h"
#include <iostream>

template<std::size_t WIDTH,std::size_t HEIGHT>
class Map {

public:
    Map():
    roadTerrain_m{},
    landTerrain_m{},
    mountainTerrain_m{},
    waterTerrain_m{},
    enclosedAreaTerrain_m{}{

    };

    void GenerateWorld(){
        // Land
        for(std::size_t x = 0; x < WIDTH ; x++) {
            for(std::size_t y = 0; y < HEIGHT; y++) {
                tiles_m[x][y] = &landTerrain_m;
            }
        }
        // Water
        for(std::size_t x = 0; x < WIDTH ; x++) {
            std::size_t diceRoll = gamelib::GetDiceRoll<6>();
            if((diceRoll%2)==0 && (diceRoll < HEIGHT)) {
                tiles_m[x][diceRoll] = &waterTerrain_m;
            }
        }
        // Mountain
        for(std::size_t x = 0; x < WIDTH ; x++) {
            for(std::size_t y = 0; y < HEIGHT; y++) {
                if(y%13==0){
                    tiles_m[x][y] = &mountainTerrain_m;
                }
            }
        }

        // Road
        for(std::size_t x = 0; x < WIDTH ; x++) {
            for(std::size_t y = 0; y < HEIGHT; y++) {
                if((x==(WIDTH/2)) || (y==(HEIGHT/2))){
                    tiles_m[x][y] = &roadTerrain_m;
                }
            }
        }

        // EnclosedArea
        for(std::size_t x = 0; x < WIDTH ; x++) {
            for(std::size_t y = 0; y < HEIGHT; y++) {
                if((x==13) && (y==13)){
                    tiles_m[x][y] = &enclosedAreaTerrain_m;
                }
            }
        }
    }

    bool IsTerrainAccessibleTo(const MapUser& mapUser,const std::size_t x,const std::size_t y){
        if((x < WIDTH) && (y < HEIGHT)){
            return tiles_m[x][y]->IsAccessibleTo(mapUser);
        }
        else{
            return false;
        }
    }

    void Print(){
        std::cout << "--- map ---" << std::endl;
        for(std::size_t x = 0; x < WIDTH; x++){
            for(std::size_t y = 0; y < HEIGHT;y++){
                if(y==(HEIGHT-1)){
                    std::cout << tiles_m[x][y]->Print() << std::endl;
                }
                else{
                    std::cout << tiles_m[x][y]->Print();
                }
            }
        }
    }

private:
    Terrain * tiles_m[WIDTH][HEIGHT];
    RoadTerrain roadTerrain_m;
    LandTerrain landTerrain_m;
    MountainTerrain mountainTerrain_m;
    WaterTerrain waterTerrain_m;
    EnclosedAreaTerrain enclosedAreaTerrain_m;
};


#endif //CPP_DESIGN_PATTERNS_MAP_H
