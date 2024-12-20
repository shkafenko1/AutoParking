#ifndef AUTOPARKING_NIGHT_CAR_H
#define AUTOPARKING_NIGHT_CAR_H
#include "Vehicle.h"
class Car : public Vehicle
{
private:
    int boardType;
public:
    Car(std::string number, Visitor* visitor, std::string color, std::string model, int boardType)
        : Vehicle(number, visitor, color, model), boardType(boardType) {}
    int getBoardType();
};
#endif //AUTOPARKING_NIGHT_CAR_H
