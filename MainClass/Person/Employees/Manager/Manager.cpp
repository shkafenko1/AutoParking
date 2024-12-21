//
// Created by LENOVO on 21.12.2024.
//

#include "Manager.h"

Manager::Manager(std::string &name, std::string &phoneNum, std::string &type, float salary, int newTeamSize, int idParking)
: Employees(name, phoneNum, type, salary, idParking){
    teamSize = newTeamSize;
}

int Manager::getTeamSize() const {
    return teamSize;
}

void Manager::setTeamSize(int newTeamSize) {
    teamSize = newTeamSize;
}

std::string Manager::serialize() {
    return  std::to_string(getIdParking()) + "|" + getName() + "|" + getPhoneNum() + "|" + getShift() + "|" + std::to_string(getSalary()) + "|" + std::to_string(getTeamSize());
}

void Manager::deserialize(std::string &string) {

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
    id = std::stoi(parts[5]);
    setTeamSize(id);
}

Manager::~Manager() = default;

