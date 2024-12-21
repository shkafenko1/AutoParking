//
// Created by LENOVO on 21.12.2024.
//

#include "Manager.h"

Manager::Manager(std::string &name, std::string &phoneNum, std::string &type, float salary, int newTeamSize) : Employees(name, phoneNum, type, salary){
    teamSize = newTeamSize;
}

int Manager::getTeamSize() const {
    return teamSize;
}

void Manager::setTeamSize(int newTeamSize) {
    teamSize = newTeamSize;
}

Manager::~Manager() = default;

