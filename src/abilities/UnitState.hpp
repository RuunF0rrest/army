#ifndef ARMY_UNITSTATE_HPP
#define ARMY_UNITSTATE_HPP


struct UnitState {
    UnitState(int healthPoints, int healthPointsLimit)
    : healthPoints(healthPoints)
    , healthPointsLimit(healthPointsLimit)
    {}

    int getHealthPoints();
    int getHealthPointsLimit();

    void receiveDamage(int damage);

private:
    int healthPoints;
    int healthPointsLimit;
};


#endif //ARMY_UNITSTATE_HPP
