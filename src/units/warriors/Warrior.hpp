#ifndef ARMY_WARRIOR_HPP
#define ARMY_WARRIOR_HPP

#include <units/Unit.hpp>

#include <abilities/UnitAttack.hpp>
#include <abilities/UnitState.hpp>

struct Warrior : Unit {
    Warrior(int healthLimit, int damage);

    virtual void attack(Unit &enemy);

    virtual void counterAttack(Unit &enemy);

    virtual int getHealthPoints() const;

    virtual int getHealthPointsLimit() const;

    virtual void receiveDamage(int damage);

    ~Warrior();

private:
    void ensureIsAlive() const;

private:
    UnitAttack* unitAttack;
    UnitState* unitState;
    
};


#endif //ARMY_WARRIOR_HPP
