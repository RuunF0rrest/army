#include "Rogue.hpp"

#include <abilities/RogueAttack.hpp>

Rogue::Rogue(int healthLimit, int damage)
: Warrior(new RogueAttack(damage), new UnitState(healthLimit))
{}
