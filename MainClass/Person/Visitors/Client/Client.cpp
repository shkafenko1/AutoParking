//
// Created by LENOVO on 21.12.2024.
//

#include "Client.h"

Client::Client(std::string &name, std::string &phoneNum, int newHoursPaid, std::string &newParkDate,
               int newDaysParked) : Visitors(name, phoneNum, newHoursPaid, newParkDate){
    daysParked = newDaysParked;
}

int Client::getDaysParked() {
    daysParked;
}

void Client::setDaysParked(int newDaysParked) {
    daysParked = newDaysParked;
}

Client::~Client() = default;

