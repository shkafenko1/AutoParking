//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_MANAGER_H
#define AUTOPARKING_NIGHT_MANAGER_H


#include "MainClass/Person/Employees/Employees.h"

class Manager : public Employees {
public:
    int teamSize;
private:
    Manager(std::string& name, std::string& phoneNum, std::string& type, float salary, int teamSize);
    ~Manager() override;

    int getTeamSize() const;
    void setTeamSize(int newTeamSize);
};


#endif //AUTOPARKING_NIGHT_MANAGER_H
