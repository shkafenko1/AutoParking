//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_EMPLOYEES_H
#define AUTOPARKING_NIGHT_EMPLOYEES_H


#include "MainClass/Person/Person.h"

class Employees : public Person{
private:
    std::string shift;
    float salary;
public:

    Employees(std::string& name, std::string& phoneNum, std::string& shift, float salary, int idParking);
    virtual ~Employees();

    std::string getShift();
    void setShift(std::string& newShift);

    float getSalary() const;
    void setSalary(float salary);
};


#endif //AUTOPARKING_NIGHT_EMPLOYEES_H
