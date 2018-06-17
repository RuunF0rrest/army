#include "UnitState.hpp"

int UnitState::getHealthPoints() {
    return healthPoints;
}

int UnitState::getHealthPointsLimit() {
    return healthPointsLimit;
}

void UnitState::receiveDamage(int damage) {
    if (healthPoints - damage < 0) {
        healthPoints = 0;
    } else {
        healthPoints -= damage;
    }
}
