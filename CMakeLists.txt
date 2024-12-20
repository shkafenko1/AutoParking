cmake_minimum_required(VERSION 3.28)
project(AutoParking_Night)

set(CMAKE_CXX_STANDARD 26)

include_directories(.)

add_executable(AutoParking_Night
        MainClass/Car.cpp
        MainClass/Vehicle.cpp
        menu/start.cpp
        menu/start.cpp
        main.cpp
)
