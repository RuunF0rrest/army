#include "Soldier.hpp"

Soldier::Soldier(int healthLimit, int damage)
: unitAttack(new UnitAttack(damage))
, unitState(new UnitState(healthLimit, healthLimit))
{}

Soldier::~Soldier() {
    delete unitAttack;
    delete unitState;
}

void Soldier::attack(Unit &enemy) {
    unitAttack->attack(*this, enemy);
}

void Soldier::counterAttack(Unit &enemy) {
    unitAttack->counterAttack(enemy);
}

int Soldier::getHealthPoints() {
    return unitState->getHealthPoints();
}

int Soldier::getHealthPointsLimit() {
    return unitState->getHealthPointsLimit();
}

void Soldier::receiveDamage(int damage) {
    unitState->receiveDamage(damage);
}
