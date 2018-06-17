cmake_minimum_required(VERSION 3.8)
project(army)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_COMPILER g++-4.9)

set(SOURCE_FILES main.cpp)
add_executable(army ${SOURCE_FILES})