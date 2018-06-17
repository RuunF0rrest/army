#ifndef ARMY_UNIT_HPP
#define ARMY_UNIT_HPP

struct Unit {
    virtual void attack(Unit& enemy) = 0;
    virtual void counterAttack(Unit& enemy) = 0;

    virtual int getHealthPoints() = 0;
    virtual int getHealthPointsLimit() = 0;

    virtual void receiveDamage(int damage) = 0;

    virtual ~Unit() {}
};

#endif //ARMY_UNIT_HPP
