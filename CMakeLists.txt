cmake_minimum_required(VERSION 3.8)
project(army)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_COMPILER g++-4.9)

set(SOURCE_FILES
    src/units/warriors/Warrior.cpp

    src/abilities/UnitState.cpp
    src/abilities/UnitAttack.cpp
   )

include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SOURCE_DIR}/extlibs)

add_executable(army_warriors_test ${SOURCE_FILES} utest/WariorsTest.cpp )