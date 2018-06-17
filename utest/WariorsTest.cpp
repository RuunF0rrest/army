#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch/catch.hpp>

#include <units/warriors/Soldier.hpp>
#include <units/warriors/Rogue.hpp>

const int WARRIOR_HP = 100;
const int WARRIOR_DAMAGE = 10;

const int ROGUE_HP = 70;
const int ROGUE_DAMAGE = 20;

TEST_CASE("WarriorAttack", "[warrior]") {
    Unit* soldier1;
    Unit* soldier2;

    REQUIRE_NOTHROW(soldier1 = new Soldier(WARRIOR_HP, WARRIOR_DAMAGE));
    REQUIRE_NOTHROW(soldier2 = new Soldier(WARRIOR_HP, WARRIOR_DAMAGE));

    REQUIRE_NOTHROW(soldier1->attack(*soldier2));

    REQUIRE(soldier1->getHealthPoints() == WARRIOR_HP - (WARRIOR_DAMAGE / 2));
    REQUIRE(soldier2->getHealthPoints() == WARRIOR_HP - WARRIOR_DAMAGE);
}

TEST_CASE("DeadWarrior", "[warrior]") {
    Unit* soldier1;
    Unit* soldier2;

    REQUIRE_NOTHROW(soldier1 = new Soldier(WARRIOR_HP, WARRIOR_DAMAGE));
    REQUIRE_NOTHROW(soldier2 = new Soldier(WARRIOR_HP, WARRIOR_DAMAGE));

    for ( ; soldier2->getHealthPoints() > 0; ) {
        REQUIRE_NOTHROW(soldier1->attack(*soldier2));
    }

    REQUIRE_THROWS_AS(soldier1->attack(*soldier2), UnitIsDeadException);
}

TEST_CASE("RogueAttack", "[warrior]") {
    Unit* rogue;
    Unit* soldier;

    REQUIRE_NOTHROW(rogue = new Rogue(ROGUE_HP, ROGUE_DAMAGE));
    REQUIRE_NOTHROW(soldier = new Soldier(WARRIOR_HP, WARRIOR_DAMAGE));

    REQUIRE_NOTHROW(rogue->attack(*soldier));

    REQUIRE(rogue->getHealthPoints() == ROGUE_HP);
    REQUIRE(soldier->getHealthPoints() == WARRIOR_HP - ROGUE_DAMAGE);
}