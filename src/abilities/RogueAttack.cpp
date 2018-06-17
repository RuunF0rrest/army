#include "RogueAttack.hpp"

RogueAttack::RogueAttack(int damage)
: UnitAttack(damage) {}

void RogueAttack::attack(Unit &attacker, Unit &unit) {
    unit.receiveDamage(damage);
}
