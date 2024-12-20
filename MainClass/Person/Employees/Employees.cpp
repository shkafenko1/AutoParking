//
// Created by LENOVO on 21.12.2024.
//

#include "Employees.h"

Employees::Employees(std::string &name, std::string &phoneNum, std::string &newType, float newSalary) : Person(name, phoneNum) {
    type = newType;
    salary = newSalary;
}

std::string Employees::getType() {
    return type;
}

void Employees::setType(std::string &newType) {
    type = newType;
}

float Employees::getSalary() const {
    return salary;
}

void Employees::setSalary(float newSalary) {
    salary = newSalary;
}


Employees::~Employees() = default;



