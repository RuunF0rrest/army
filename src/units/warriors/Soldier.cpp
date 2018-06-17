#include "Soldier.hpp"

Soldier::Soldier(int healthLimit, int damage)
: Warrior(new UnitAttack(damage), new UnitState(healthLimit))
{}
