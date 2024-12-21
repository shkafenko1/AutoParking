#ifndef AUTOPARKING_NIGHT_VEHICLE_H
#define AUTOPARKING_NIGHT_VEHICLE_H
#include "string"
#include "../Person/Visitors/Visitors.h"
class Vehicle{
protected:
    int idParking;

    std::string regNumber;
    Visitors* visitor;
    std::string color;
    std::string model;
public:
    Vehicle(std::string& number, Visitors* visitor, std::string& color, std::string& model, int idParking)
        : regNumber(number), visitor(visitor), color(color), model(model), idParking(idParking) {}
    virtual ~Vehicle();

    std::string getRegNumber();
    void setRegNumber(std::string& newNumber);

    std::string getColor();
    void setColor(std::string& newColor);

    std::string getModel();
    void setModel(std::string& newModel);

    Visitors* getVisitor();
    void setVisitor(Visitors* visitor);

    void setIdParking(int idParking);
    int getIdParking() const;

};
#endif //AUTOPARKING_NIGHT_VEHICLE_H
