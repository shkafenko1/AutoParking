//
// Created by LENOVO on 21.12.2024.
//

#include "Person.h"


std::string Person::getName(){
    return name;
}
void Person::setName(std::string& newName){
    name = newName;
}
std::string Person::getPhoneNum(){
    return phoneNum;
}
void Person::setPhoneNum(std::string& newPhoneNum){
    phoneNum = newPhoneNum;
}

Person::Person(std::string &name, std::string &phoneNum, int idParking)  : name(name), phoneNum(phoneNum), idParking(idParking) {}

Person::Person(int newIdParking) {
    idParking = newIdParking;
}

void Person::setIdParking(int newIdParking) {
    idParking = newIdParking;
}

int Person::getIdParking() {
    return idParking;
}

Person::Person() = default;

Person::~Person() = default;
