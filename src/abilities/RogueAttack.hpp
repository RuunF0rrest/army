#ifndef ARMY_ROGUEATTACK_HPP
#define ARMY_ROGUEATTACK_HPP

#include "UnitAttack.hpp"

struct RogueAttack : UnitAttack {
    RogueAttack(int damage);

    virtual void attack(Unit &attacker, Unit &unit);

};


#endif //ARMY_ROGUEATTACK_HPP
