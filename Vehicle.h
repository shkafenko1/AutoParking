#ifndef AUTOPARKING_NIGHT_VEHICLE_H
#define AUTOPARKING_NIGHT_VEHICLE_H
#include "string"
class Vehicle{
protected:
    std::string number;
    Visitor* visitor;
    std::string color;
    std::string model;
public:
    Vehicle(std::string number, Visitor* visitor, std::string color, std::string model)
        : number(number), visitor(visitor), color(color), model(model) {}
    std::string getNumber() const;
    std::string getColor() const;
    std::string getModel() const;
};
#endif //AUTOPARKING_NIGHT_VEHICLE_H
