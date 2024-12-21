//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_SECURITY_H
#define AUTOPARKING_NIGHT_SECURITY_H


#include "MainClass/Person/Employees/Employees.h"
#include "FileIO/DeSerialize.h"

class Security : public Employees, public DeSerialize {
private:
    std::string equipment;
public:
    Security(std::string &name, std::string &phoneNum, std::string &type, float salary, std::string& newEquipment, int idParking);
    ~Security() override;

    std::string getEquipment();
    void setEquipment(std::string& newEquipment);

    std::string serialize() override;
    void deserialize(std::string &string) override;
};


#endif //AUTOPARKING_NIGHT_SECURITY_H
