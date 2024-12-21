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

Guest::Guest(std::string &name, std::string &phoneNum, int newHoursPaid, std::string &newParkDate, int newHoursParked, int idParking)
    : Visitors(name, phoneNum, newHoursPaid, newParkDate, idParking){
    hoursParked = newHoursParked;
}

std::string Guest::serialize() {
    return  std::to_string(getIdParking()) + "|" + getName() + "|" + getPhoneNum() + "|" + std::to_string(getHoursPaid()) + "|" + getParkDate() + "|" + std::to_string(getHoursParked());
}

void Guest::deserialize(std::string &string) {
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
    id = std::stoi(parts[3]);
    setHoursPaid(id);
    setParkDate(parts[4]);
    id = std::stoi(parts[5]);
    setHoursParked(id);
}

Guest::~Guest() = default;