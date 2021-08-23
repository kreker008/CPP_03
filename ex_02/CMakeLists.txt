cmake_minimum_required(VERSION 3.16)
project(ex_00)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex_00
        ClapTrap.cpp
        FragTrap.cpp
        main.cpp)
