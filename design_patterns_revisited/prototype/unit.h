//
// Created by oneshepherdssheep on 08/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_UNIT_H
#define CPP_DESIGN_PATTERNS_UNIT_H

#include <cstdint>

/**
 *
 */
class Unit {
public :
    virtual ~Unit(){};
    virtual Unit* Clone() = 0;
    virtual uint8_t GetAttackRange() = 0;
    virtual uint8_t GetMoveRange() = 0;
};

/**
 *
 */
class Infantry : public Unit {
public:
    Infantry();
    ~Infantry();
    Unit* Clone() override;
    uint8_t GetAttackRange() override;
    uint8_t GetMoveRange() override;
};

/**
 *
 */
class Recon : public Unit {
public:
    Recon();
    ~Recon();
    Unit* Clone() override;
    uint8_t GetAttackRange() override;
    uint8_t GetMoveRange() override;
};

/**
 *
 */
class BattleHelicopter : public Unit {
public:
    BattleHelicopter();
    ~BattleHelicopter();
    Unit* Clone() override;
    uint8_t GetAttackRange() override;
    uint8_t GetMoveRange() override;
};

#endif //CPP_DESIGN_PATTERNS_UNIT_H
