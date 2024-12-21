#ifndef AUTOPARKING_NIGHT_VEHICLE_H
#define AUTOPARKING_NIGHT_VEHICLE_H
#include "string"
#include "../Person/Visitors/Visitors.h"
class Vehicle{
protected:
    int idParking;

    std::string number;
    Visitors* visitor;
    std::string color;
    std::string model;
public:
    Vehicle(std::string& number, Visitors* visitor, std::string& color, std::string& model, int idParking)
        : number(number), visitor(visitor), color(color), model(model), idParking(idParking) {}
    virtual ~Vehicle();

    std::string getNumber();
    void setNumber(std::string& newNumber);

    std::string getColor();
    void setColor(std::string& newColor);

    std::string getModel();
    void setModel(std::string& newModel);

};
#endif //AUTOPARKING_NIGHT_VEHICLE_H
