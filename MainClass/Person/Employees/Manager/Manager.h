//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_MANAGER_H
#define AUTOPARKING_NIGHT_MANAGER_H


#include "MainClass/Person/Employees/Employees.h"
#include "FileIO/DeSerialize.h"

class Manager : public Employees, public DeSerialize {
public:
    int teamSize;
private:
    Manager(std::string& name, std::string& phoneNum, std::string& type, float salary, int teamSize, int idParking);
    ~Manager() override;

    int getTeamSize() const;
    void setTeamSize(int newTeamSize);

    std::string serialize() override;
    void deserialize(std::string &string) override;
};


#endif //AUTOPARKING_NIGHT_MANAGER_H
