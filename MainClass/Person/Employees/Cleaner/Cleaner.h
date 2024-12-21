//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_CLEANER_H
#define AUTOPARKING_NIGHT_CLEANER_H


#include "MainClass/Person/Employees/Employees.h"
#include "../../../../FileIO/DeSerialize.h"
class Cleaner : public Employees, public DeSerialize {
private:
    bool canCleanCar;
public:
    bool getCanClearCar() const;
    void setCanClearCar(bool canCleanCar);

    Cleaner(std::string& name, std::string& phoneNum, std::string& type, float salary, bool canCleanCar, int idParking);
    ~Cleaner() override;

    std::string serialize() override;
    void deserialize(std::string &string) override;
};


#endif //AUTOPARKING_NIGHT_CLEANER_H
