//
// Created by LENOVO on 21.12.2024.
//

#include "Security.h"

Security::Security(std::string &name, std::string &phoneNum, std::string &type, float salary,
                   std::string &newEquipment, int idParking) : Employees(name, phoneNum, type, salary, idParking) {
    equipment = newEquipment;
}

std::string Security::getEquipment() {
    return equipment;
}

void Security::setEquipment(std::string &newEquipment) {
    equipment = newEquipment;
}

std::string Security::serialize() {
    return  std::to_string(getIdParking()) + "|" + getName() + "|" + getPhoneNum() + "|" + getShift() + "|" + std::to_string(getSalary()) + "|" + getEquipment();
}

void Security::deserialize(std::string &string) {
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
    setEquipment(parts[5]);
}

Security::~Security() = default;
