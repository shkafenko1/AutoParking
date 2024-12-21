//
// Created by LENOVO on 21.12.2024.
//

#include "Client.h"

Client::Client(std::string &name, std::string &phoneNum, int newHoursPaid, std::string &newParkDate,
               int newDaysParked, int idParking) : Visitors(name, phoneNum, newHoursPaid, newParkDate, idParking){
    daysParked = newDaysParked;
}

int Client::getDaysParked() {
    daysParked;
}

void Client::setDaysParked(int newDaysParked) {
    daysParked = newDaysParked;
}

std::string Client::serialize() {
    return  std::to_string(getIdParking()) + "|" + getName() + "|" + getPhoneNum() + "|" + std::to_string(getHoursPaid()) + "|" + getParkDate() + "|" + std::to_string(getDaysParked());
}

void Client::deserialize(std::string &string) {
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
    setDaysParked(id);
}

Client::~Client() = default;

