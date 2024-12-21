//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_GUEST_H
#define AUTOPARKING_NIGHT_GUEST_H


#include "MainClass/Person/Visitors/Visitors.h"
#include "FileIO/DeSerialize.h"

class Guest : public Visitors, public DeSerialize {
private:
    int hoursParked;
public:
    Guest(std::string& name, std::string& phoneNum, int newHoursPaid, std::string& newParkDate, int newHoursParked, int idParking);
    ~Guest() override;

    int getHoursParked();
    void setHoursParked(int newDaysParked);

    std::string serialize() override;
    void deserialize(std::string &string) override;
};


#endif //AUTOPARKING_NIGHT_GUEST_H
