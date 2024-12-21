//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_SECURITY_H
#define AUTOPARKING_NIGHT_SECURITY_H


#include "MainClass/Person/Employees/Employees.h"

class Security : public Employees {
private:
    std::string equipment;
public:
    Security(std::string &name, std::string &phoneNum, std::string &type, float salary, std::string& newEquipment);
    ~Security() override;

    std::string getEquipment();
    void setEquipment(std::string& newEquipment);
};


#endif //AUTOPARKING_NIGHT_SECURITY_H
