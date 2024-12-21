#ifndef AUTOPARKING_NIGHT_CARGO_H
#define AUTOPARKING_NIGHT_CARGO_H
#include "MainClass/Vehicle/Vehicle.h"
class Cargo : public Vehicle{
private:
    int height;
    int weight;
public:
    Cargo(std::string& number, Visitors* visitor, std::string& color, std::string& model, int height, int weight, int idParking)
        : Vehicle(number, visitor, color, model, idParking), height(height), weight(weight) {}

    int getHeight() const;
    int getWeight() const;

    ~Cargo() override;
};
#endif //AUTOPARKING_NIGHT_CARGO_H
