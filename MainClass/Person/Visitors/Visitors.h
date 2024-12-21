//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_VISITORS_H
#define AUTOPARKING_NIGHT_VISITORS_H


#include "MainClass/Person/Person.h"

class Visitors : public Person{
private:
    int hoursPaid;
    std::string parkDate;
public:
    Visitors(std::string& name, std::string& phoneNum, int newHoursPaid, std::string& newParkDate);
    ~Visitors() override;

    int getHoursPaid() const;
    void setHoursPaid(int newHoursPaid);

    std::string getParkDate();
    void setParkDate(std::string& newParkDate);
};


#endif //AUTOPARKING_NIGHT_VISITORS_H
