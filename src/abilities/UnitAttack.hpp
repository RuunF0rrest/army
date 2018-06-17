#ifndef ARMY_UNITATTACK_HPP
#define ARMY_UNITATTACK_HPP

#include <units/Unit.hpp>

struct UnitAttack {
    UnitAttack(int damage);

    void attack(Unit& attacker, Unit& unit);
    void counterAttack(Unit& unit);

private:
    int damage;
};


#endif //ARMY_UNITATTACK_HPP
