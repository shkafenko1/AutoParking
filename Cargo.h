#ifndef AUTOPARKING_NIGHT_CARGO_H
#define AUTOPARKING_NIGHT_CARGO_H
#include "Vehicle.h"
class Cargo : public Vehicle{
private:
    int height;
    int weight;
public:
    Cargo(std::string number, Visitor* visitor, std::string color, std::string model, int height, int weight)
        : Vehicle(number, visitor, color, model), height(height), weight(weight) {}
    int getHeight();
    int getWeight();
};
#endif //AUTOPARKING_NIGHT_CARGO_H
