#ifndef ARMY_SOLDIER_HPP
#define ARMY_SOLDIER_HPP

#include <units/Unit.hpp>

#include <abilities/UnitAttack.hpp>
#include <abilities/UnitState.hpp>

struct Soldier : Unit {
    Soldier(int healthLimit, int damage);

    virtual void attack(Unit &enemy);

    virtual void counterAttack(Unit &enemy);

    virtual int getHealthPoints() const;

    virtual int getHealthPointsLimit() const;

    virtual void receiveDamage(int damage);

    ~Soldier();

private:
    void ensureIsAlive() const;

private:
    UnitAttack* unitAttack;
    UnitState* unitState;
    
};


#endif //ARMY_SOLDIER_HPP
