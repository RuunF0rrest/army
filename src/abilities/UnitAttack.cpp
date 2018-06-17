#include "UnitAttack.hpp"

UnitAttack::UnitAttack(int damage)
: damage(damage)
{}

void UnitAttack::counterAttack(Unit &unit) {
    unit.receiveDamage(damage / 2);
}

void UnitAttack::attack(Unit& attacker, Unit &unit) {
    unit.receiveDamage(damage);
    unit.counterAttack(attacker);
}


