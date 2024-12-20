//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_PERSON_H
#define AUTOPARKING_NIGHT_PERSON_H


#include <string>

class Person {
private:
    std::string name;
    std::string phoneNum;
public:
    std::string getName();
    void setName(std::string& name);

    std::string getPhoneNum();
    void setPhoneNum(std::string& phoneNum);

};


#endif //AUTOPARKING_NIGHT_PERSON_H
