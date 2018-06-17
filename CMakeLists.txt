cmake_minimum_required(VERSION 3.8)
project(army)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_COMPILER g++-4.9)

set(SOURCE_FILES
    main.cpp

    src/units/warriors/Soldier.cpp

    src/abilities/UnitState.cpp
    src/abilities/UnitAttack.cpp
   )

include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SOURCE_DIR}/extlibs)

add_executable(army ${SOURCE_FILES})