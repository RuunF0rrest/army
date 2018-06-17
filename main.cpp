#include <iostream>

#include <units/warriors/Warrior.hpp>


int main() {
    Soldier soldier1(100, 10);
    Soldier soldier2(100, 10);

    soldier1.attack(soldier2);

    std::cout << "Soldier 1 hp : " << soldier1.getHealthPoints() << std::endl;
    std::cout << "Soldier 2 hp : " << soldier2.getHealthPoints() << std::endl;

    return 0;
}