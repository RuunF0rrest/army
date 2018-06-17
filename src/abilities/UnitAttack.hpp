#ifndef ARMY_UNITATTACK_HPP
#define ARMY_UNITATTACK_HPP

#include <units/Unit.hpp>

struct UnitAttack {
    UnitAttack(int damage);

    virtual void attack(Unit& attacker, Unit& unit);
    virtual void counterAttack(Unit& unit);

protected:
    int damage;
};


#endif //ARMY_UNITATTACK_HPP
