#include "Soldier.hpp"

#include <stdexcept>

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

int Soldier::getHealthPoints() const {
    return unitState->getHealthPoints();
}

int Soldier::getHealthPointsLimit() const {
    return unitState->getHealthPointsLimit();
}

void Soldier::receiveDamage(int damage) {
    ensureIsAlive();

    unitState->receiveDamage(damage);
}

void Soldier::ensureIsAlive() const {
    if (getHealthPoints() == 0) {
        throw UnitIsDeadException();
    }
}
