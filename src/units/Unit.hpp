#ifndef ARMY_UNIT_HPP
#define ARMY_UNIT_HPP

#include <stdexcept>

struct UnitIsDeadException {};

struct Unit {
    virtual void attack(Unit& enemy) = 0;
    virtual void counterAttack(Unit& enemy) = 0;

    virtual int getHealthPoints() const = 0;
    virtual int getHealthPointsLimit() const = 0;

    virtual void receiveDamage(int damage) = 0;

    virtual ~Unit() {}
};

#endif //ARMY_UNIT_HPP
