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

Cleaner::Cleaner(std::string &name, std::string &phoneNum, std::string &type, float salary, bool newCanCleanCar) : Employees(name, phoneNum, type, salary) {
    canCleanCar = newCanCleanCar;
}

Cleaner::~Cleaner() = default;