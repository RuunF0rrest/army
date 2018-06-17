#include "Warrior.hpp"

#include <stdexcept>

Warrior::Warrior(int healthLimit, int damage)
: unitAttack(new UnitAttack(damage))
, unitState(new UnitState(healthLimit, healthLimit))
{}

Warrior::~Warrior() {
    delete unitAttack;
    delete unitState;
}

void Warrior::attack(Unit &enemy) {
    unitAttack->attack(*this, enemy);
}

void Warrior::counterAttack(Unit &enemy) {
    unitAttack->counterAttack(enemy);
}

int Warrior::getHealthPoints() const {
    return unitState->getHealthPoints();
}

int Warrior::getHealthPointsLimit() const {
    return unitState->getHealthPointsLimit();
}

void Warrior::receiveDamage(int damage) {
    ensureIsAlive();

    unitState->receiveDamage(damage);
}

void Warrior::ensureIsAlive() const {
    if (getHealthPoints() == 0) {
        throw UnitIsDeadException();
    }
}
