#ifndef ARMY_UNIT_HPP
#define ARMY_UNIT_HPP

struct Unit {
    void attack(Unit& enemy);
    void counterAttack(Unit& enemy);

    int getHealthPoints();
    int getHealthPointsLimit();
};

#endif //ARMY_UNIT_HPP
