//
// Created by LENOVO on 21.12.2024.
//

#include "Guest.h"


int Guest::getHoursParked() {
    hoursParked;
}

void Guest::setHoursParked(int newHoursParked) {
    hoursParked = newHoursParked;
}

Guest::Guest(std::string &name, std::string &phoneNum, int newHoursPaid, std::string &newParkDate, int newHoursParked)
    : Visitors(name, phoneNum, newHoursPaid, newParkDate){
    hoursParked = newHoursParked;
}

Guest::~Guest() = default;