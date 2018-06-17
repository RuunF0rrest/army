#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch/catch.hpp>

#include <units/warriors/Warrior.hpp>

const int WARRIOR_HP = 100;
const int WARRIOR_DAMAGE = 10;

TEST_CASE("WarriorAttack", "[warrior]") {
    Warrior* soldier1;
    Warrior* soldier2;

    REQUIRE_NOTHROW(soldier1 = new Warrior(WARRIOR_HP, WARRIOR_DAMAGE));
    REQUIRE_NOTHROW(soldier2 = new Warrior(WARRIOR_HP, WARRIOR_DAMAGE));

    REQUIRE_NOTHROW(soldier1->attack(*soldier2));

    REQUIRE(soldier1->getHealthPoints() == WARRIOR_HP - (WARRIOR_DAMAGE / 2));
    REQUIRE(soldier2->getHealthPoints() == WARRIOR_HP - WARRIOR_DAMAGE);
}

TEST_CASE("DeadWarrior", "[warrior]") {
    Warrior* soldier1;
    Warrior* soldier2;

    REQUIRE_NOTHROW(soldier1 = new Warrior(WARRIOR_HP, WARRIOR_DAMAGE));
    REQUIRE_NOTHROW(soldier2 = new Warrior(WARRIOR_HP, WARRIOR_DAMAGE));

    for ( ; soldier2->getHealthPoints() > 0; ) {
        REQUIRE_NOTHROW(soldier1->attack(*soldier2));
    }

    REQUIRE_THROWS_AS(soldier1->attack(*soldier2), UnitIsDeadException);
}