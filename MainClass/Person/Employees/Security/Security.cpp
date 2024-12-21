//
// Created by LENOVO on 21.12.2024.
//

#include "Security.h"

Security::Security(std::string &name, std::string &phoneNum, std::string &type, float salary,
                   std::string &newEquipment) : Employees(name, phoneNum, type, salary) {
    equipment = newEquipment;
}

std::string Security::getEquipment() {
    return equipment;
}

void Security::setEquipment(std::string &newEquipment) {
    equipment = newEquipment;
}

Security::~Security() = default;
