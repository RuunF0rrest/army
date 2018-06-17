#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch/catch.hpp>

#include <units/warriors/Warrior.hpp>

const int SOLDIER_HP = 100;
const int SOLDIER_DAMAGE = 10;

TEST_CASE("SoldierAttack", "[warrior]") {
    Soldier* soldier1;
    Soldier* soldier2;

    REQUIRE_NOTHROW(soldier1 = new Soldier(SOLDIER_HP, SOLDIER_DAMAGE));
    REQUIRE_NOTHROW(soldier2 = new Soldier(SOLDIER_HP, SOLDIER_DAMAGE));

    REQUIRE_NOTHROW(soldier1->attack(*soldier2));

    REQUIRE(soldier1->getHealthPoints() == SOLDIER_HP - (SOLDIER_DAMAGE / 2));
    REQUIRE(soldier2->getHealthPoints() == SOLDIER_HP - SOLDIER_DAMAGE);
}

TEST_CASE("DeadSoldier", "[warrior]") {
    Soldier* soldier1;
    Soldier* soldier2;

    REQUIRE_NOTHROW(soldier1 = new Soldier(SOLDIER_HP, SOLDIER_DAMAGE));
    REQUIRE_NOTHROW(soldier2 = new Soldier(SOLDIER_HP, SOLDIER_DAMAGE));

    for ( ; soldier2->getHealthPoints() > 0; ) {
        REQUIRE_NOTHROW(soldier1->attack(*soldier2));
    }

    REQUIRE_THROWS_AS(soldier1->attack(*soldier2), UnitIsDeadException);
}