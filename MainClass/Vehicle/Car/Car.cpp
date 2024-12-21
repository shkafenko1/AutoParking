#include "Car.h"
std::string Car::getBoardType() {
    return boardType;
}

void Car::setBoardType(std::string &newBoardType) {
    boardType = newBoardType;
}

std::string Car::serialize() {
    return  std::to_string(getIdParking()) + "|" + getRegNumber() + "|" + getVisitor()->getPhoneNum() + "|" + getColor() + "|" + getModel() + "|" + getBoardType();
}

void Car::deserialize(std::string &string) {
    std::string parts[6];
    int index = 0;
    int charParts = 0;
    while (string[charParts] != '\n'){
        if(string[charParts] == '|'){
            index++;
            charParts++;
            continue;
        }
        parts[index] += string[charParts];
        charParts++;
    }
    int id = std::stoi(parts[0]);
    setIdParking(id);
    setRegNumber(parts[1]);
    auto* visitor = new Visitors();
    setVisitor(visitor);
    visitor->setPhoneNum(parts[2]);
    setColor(parts[3]);
    setModel(parts[4]);
    setBoardType(parts[5]);
}

Car::~Car() = default;