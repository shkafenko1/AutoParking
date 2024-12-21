//
// Created by LENOVO on 21.12.2024.
//

#include "Employees.h"

Employees::Employees(std::string &name, std::string &phoneNum, std::string &newShift, float newSalary, int idParking)
    : Person(name, phoneNum, idParking) {
    shift = newShift;
    salary = newSalary;
}

std::string Employees::getShift() {
    return shift;
}

void Employees::setShift(std::string &newShift) {
    shift = newShift;
}

float Employees::getSalary() const {
    return salary;
}

void Employees::setSalary(float newSalary) {
    salary = newSalary;
}


Employees::~Employees() = default;



