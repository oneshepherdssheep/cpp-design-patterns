//
// Created by oneshepherdssheep on 09/09/22.
//

#ifndef CPP_DESIGN_PATTERNS_BATTLE_TURN_STATE_H
#define CPP_DESIGN_PATTERNS_BATTLE_TURN_STATE_H

#include "battle_turn_state.fwd.h"
#include "battle_turn.fwd.h"
#include "input.h"
#include <iostream>

/**
 *
 */
class BattleTurnState {
public:
    virtual ~BattleTurnState(){ std::cout << "[battleturnstate] destruction" << std::endl;};
    virtual void Enter(BattleTurn& battleTurn){};
    virtual BattleTurnState* HandleInput(BattleTurn& battleTurn, Input input) = 0;
    virtual void Update(BattleTurn& battleTurn){};
};

/**
 *
 */
class UnitSelectionState : public BattleTurnState {
public:
    static BattleTurnState& GetInstance();
    BattleTurnState* HandleInput(BattleTurn& battleTurn, Input input) override;
    void Update(BattleTurn& battleTurn) override;
    void Enter(BattleTurn& battleTurn) override;
private:
    UnitSelectionState();
};

/**
 *
 */
class UnitMovementState : public BattleTurnState {
public:
    static BattleTurnState& GetInstance();
    BattleTurnState* HandleInput(BattleTurn& battleTurn, Input input) override;
    void Update(BattleTurn& battleTurn) override;
    void Enter(BattleTurn& battleTurn) override;
private:
    UnitMovementState();
};

/**
 *
 */
class UnitActionOrderState : public BattleTurnState {
public:
    static BattleTurnState& GetInstance();
    BattleTurnState* HandleInput(BattleTurn& battleTurn, Input input) override;
    void Update(BattleTurn& battleTurn) override;
    void Enter(BattleTurn& battleTurn) override;
private:
    UnitActionOrderState();
};


#endif //CPP_DESIGN_PATTERNS_BATTLE_TURN_STATE_H
