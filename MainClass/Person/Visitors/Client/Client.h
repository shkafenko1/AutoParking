//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_CLIENT_H
#define AUTOPARKING_NIGHT_CLIENT_H


#include "MainClass/Person/Visitors/Visitors.h"
#include "FileIO/DeSerialize.h"

class Client : public Visitors, public DeSerialize {
private:
    int daysParked;
public:
    Client(std::string& name, std::string& phoneNum, int newHoursPaid, std::string& newParkDate, int newDaysParked, int idParking);
    ~Client() override;

    int getDaysParked();
    void setDaysParked(int newDaysParked);

    std::string serialize() override;
    void deserialize(std::string &string) override;
};


#endif //AUTOPARKING_NIGHT_CLIENT_H
