#include "Vehicle.h"

std::string Vehicle::getColor(){
    return color;
}

std::string Vehicle::getModel(){
    return model;
}

std::string Vehicle::getRegNumber(){
    return regNumber;
}

void Vehicle::setRegNumber(std::string &newNumber) {
    regNumber = newNumber;
}

void Vehicle::setColor(std::string &newColor) {
    color = newColor;
}

void Vehicle::setModel(std::string &newModel) {
    model = newModel;
}

void Vehicle::setIdParking(int newIdParking) {
    idParking = newIdParking;
}

int Vehicle::getIdParking() const {
    return idParking;
}

Visitors *Vehicle::getVisitor() {
    return visitor;
}

void Vehicle::setVisitor(Visitors *newVisitor) {
    visitor = newVisitor;
}
