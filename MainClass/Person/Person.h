//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_PERSON_H
#define AUTOPARKING_NIGHT_PERSON_H


#include <string>

class Person {
private:
    int idParking = 0;

    std::string name;
    std::string phoneNum;
public:

    explicit Person(int idParking);
    void setIdParking(int idParking);
    int getIdParking();

    Person(std::string& name, std::string& phoneNum, int idParking);

    Person();

    virtual ~Person();

    std::string getName();
    void setName(std::string& name);

    std::string getPhoneNum();
    void setPhoneNum(std::string& phoneNum);
};


#endif //AUTOPARKING_NIGHT_PERSON_H
