//
// Created by LENOVO on 21.12.2024.
//

#include "Cleaner.h"

bool Cleaner::getCanClearCar() const {
    return canCleanCar;
}

void Cleaner::setCanClearCar(bool newCanCleanCar) {
    canCleanCar = newCanCleanCar;
}

Cleaner::Cleaner(std::string &name, std::string &phoneNum, std::string &shift, float salary, bool newCanCleanCar, int idParking)
    : Employees(name, phoneNum, shift, salary, idParking) {
    canCleanCar = newCanCleanCar;
}

std::string Cleaner::serialize() {
    return  std::to_string(getIdParking()) + "|" + getName() + "|" + getPhoneNum() + "|" + getShift() + "|" + std::to_string(getSalary()) + "|" + std::to_string(getCanClearCar());
}

void Cleaner::deserialize(std::string &string) {

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
    setName(parts[1]);
    setPhoneNum(parts[2]);
    setShift(parts[3]);
    id = std::stol(parts[4]);
    setSalary(id);
    setCanClearCar(parts[5] == "1");
}

Cleaner::~Cleaner() = default;