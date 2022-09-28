// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com
//
// Created by oneshepherdssheep on 08/09/22.
//

#include "unit.h"
#include <iostream>

// Infantry
Infantry::Infantry() { std::cout << "[infantry] unit created" << std::endl; }
Infantry::~Infantry() noexcept { std::cout << "[infantry] unit destroyed" << std::endl; }
Unit* Infantry::Clone(){ return new Infantry();}
uint8_t Infantry::GetAttackRange(){ return 1;}
uint8_t Infantry::GetMoveRange(){ return 3;}

// Recon
Recon::Recon() { std::cout << "[recon] unit created" << std::endl; }
Recon::~Recon() noexcept { std::cout << "[recon] unit destroyed" << std::endl; }
Unit* Recon::Clone(){ return new Recon();}
uint8_t Recon::GetAttackRange(){ return 1;}
uint8_t Recon::GetMoveRange(){ return 5;}

// BattleHelicopter
BattleHelicopter::BattleHelicopter() { std::cout << "[battlehelicopter] unit created" << std::endl; }
BattleHelicopter::~BattleHelicopter() noexcept { std::cout << "[battlehelicopter] unit destroyed" << std::endl; }
Unit* BattleHelicopter::Clone() { return new BattleHelicopter();}
uint8_t BattleHelicopter::GetAttackRange() { return 1; }
uint8_t BattleHelicopter::GetMoveRange(){ return 3; }