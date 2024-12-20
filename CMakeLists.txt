cmake_minimum_required(VERSION 3.28)
project(AutoParking_Night)

set(CMAKE_CXX_STANDARD 26)

include_directories(.)

add_executable(AutoParking_Night
        Person.cpp
        Person.h
        container/ListContainer.h
        alghoritm/algohoritmSorter.h)
