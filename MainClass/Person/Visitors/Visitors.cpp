//
// Created by LENOVO on 21.12.2024.
//

#include "Visitors.h"

Visitors::Visitors(std::string &name, std::string &phoneNum, int newHoursPaid, std::string &newParkDate)
    : Person(name, phoneNum){
    hoursPaid = newHoursPaid;
    parkDate = newParkDate;
}

void Visitors::setHoursPaid(int newHoursPaid) {
    hoursPaid = newHoursPaid;
}

int Visitors::getHoursPaid() const {
    return hoursPaid;
}

std::string Visitors::getParkDate() {
    return parkDate;
}

void Visitors::setParkDate(std::string &newParkDate) {
    parkDate = newParkDate;
}