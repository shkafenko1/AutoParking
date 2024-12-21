//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_GUEST_H
#define AUTOPARKING_NIGHT_GUEST_H


#include "MainClass/Person/Visitors/Visitors.h"

class Guest : public Visitors {
private:
    int hoursParked;
public:
    Guest(std::string& name, std::string& phoneNum, int newHoursPaid, std::string& newParkDate, int newHoursParked);
    ~Guest() override;

    int getHoursParked();
    void setHoursParked(int newDaysParked);
};


#endif //AUTOPARKING_NIGHT_GUEST_H
