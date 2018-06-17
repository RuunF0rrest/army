#ifndef ARMY_SOLDIER_HPP
#define ARMY_SOLDIER_HPP

#include "Warrior.hpp"

struct Soldier : Warrior {
    Soldier(int healthLimit, int damage);
};


#endif //ARMY_SOLDIER_HPP
