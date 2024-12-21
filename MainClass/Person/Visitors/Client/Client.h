//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_CLIENT_H
#define AUTOPARKING_NIGHT_CLIENT_H


#include "MainClass/Person/Visitors/Visitors.h"

class Client : public Visitors {
private:
    int daysParked;
public:
    Client(std::string& name, std::string& phoneNum, int newHoursPaid, std::string& newParkDate, int newDaysParked);
    ~Client() override;

    int getDaysParked();
    void setDaysParked(int newDaysParked);
};


#endif //AUTOPARKING_NIGHT_CLIENT_H
