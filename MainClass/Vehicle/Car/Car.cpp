#include "Car.h"
std::string Car::getBoardType() {
    return boardType;
}

void Car::setBoardType(std::string &newBoardType) {
    boardType = newBoardType;
}

Car::~Car() = default;