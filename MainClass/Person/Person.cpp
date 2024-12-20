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