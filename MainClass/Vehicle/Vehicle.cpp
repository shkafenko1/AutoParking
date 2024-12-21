#include "Vehicle.h"

std::string Vehicle::getColor(){
    return color;
}

std::string Vehicle::getModel(){
    return model;
}

std::string Vehicle::getNumber(){
    return number;
}

void Vehicle::setNumber(std::string &newNumber) {
    number = newNumber;
}

void Vehicle::setColor(std::string &newColor) {
    color = newColor;
}

void Vehicle::setModel(std::string &newModel) {
    model = newModel;
}
