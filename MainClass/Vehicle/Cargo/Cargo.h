#ifndef AUTOPARKING_NIGHT_CARGO_H
#define AUTOPARKING_NIGHT_CARGO_H
#include "MainClass/Vehicle/Vehicle.h"
#include "FileIO/DeSerialize.h"

class Cargo : public Vehicle, public DeSerialize{
private:
    int height;
    int weight;
public:
    Cargo(std::string& number, Visitors* visitor, std::string& color, std::string& model, int height, int weight, int idParking)
        : Vehicle(number, visitor, color, model, idParking), height(height), weight(weight) {}

    int getHeight() const;
    void setHeight(int newHeight);

    int getWeight() const;
    void setWeight(int newWeight);

    ~Cargo() override;

    std::string serialize() override;
    void deserialize(std::string &string) override;
};
#endif //AUTOPARKING_NIGHT_CARGO_H
