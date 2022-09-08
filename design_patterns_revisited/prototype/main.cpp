//
// Created by oneshepherdssheep on 08/09/22.
//

#include <cstdio>
#include <cstdint>
#include <iostream>
#include <cstdlib>
#include "spawner.h"
#include "unit.h"

// Global entities
Infantry infantryUnit;
Recon reconUnit;
BattleHelicopter battleHelicopterUnit;

Unit* spawnInfantry(){
    return infantryUnit.Clone();
}

Unit* spawnRecon(){
    return reconUnit.Clone();
}

Unit* spawnBattleHelicopter(){
    return battleHelicopterUnit.Clone();
}

int main() {
    // Spawn V1
    Spawner *infantryUnitSpawner = new Spawner(&infantryUnit);
    Spawner *reconUnitSpawner = new Spawner(&reconUnit);
    Spawner *battleHelicopterSpawner = new Spawner(&battleHelicopterUnit);

    // Spawn V2
    SpawnerV2 * infantryUnitSpawnerV2 = new SpawnerV2(spawnInfantry);
    SpawnerV2 * reconUnitSpawnerV2 = new SpawnerV2(spawnRecon);
    SpawnerV2 * battleHelicopterSpawnerV2 = new SpawnerV2(spawnBattleHelicopter);

    // Spawn V3
    SpawnerV3<Infantry> infantryUnitSpawnerV3;
    SpawnerV3<Recon> reconUnitSpawnerV3;
    SpawnerV3<BattleHelicopter> battleHelicopterSpawnerV3;

    // Spawning calls for Infantry
    Unit* infantry_1 = infantryUnitSpawner->spawnUnit();
    Unit* infantry_2 = infantryUnitSpawnerV2->spawnUnit();
    Unit* infantry_3 = infantryUnitSpawnerV3.spawnUnit();
    delete infantry_1;
    delete infantry_2;
    delete infantry_3;

    // Spawning calls for Recon
    Unit* recon_1 = reconUnitSpawner->spawnUnit();
    Unit* recon_2 = reconUnitSpawnerV2->spawnUnit();
    Unit* recon_3 = reconUnitSpawnerV3.spawnUnit();
    delete recon_1;
    delete recon_2;
    delete recon_3;

    // Spawning calls for BattleHelicopter
    Unit* battleHelicopter_1 = battleHelicopterSpawner->spawnUnit();
    Unit* battleHelicopter_2 = battleHelicopterSpawnerV2->spawnUnit();
    Unit* battleHelicopter_3 = battleHelicopterSpawnerV3.spawnUnit();
    delete battleHelicopter_1;
    delete battleHelicopter_2;
    delete battleHelicopter_3;

    return EXIT_SUCCESS;
}
