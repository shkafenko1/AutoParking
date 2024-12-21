#ifndef AUTOPARKING_NIGHT_MOTO_H
#define AUTOPARKING_NIGHT_MOTO_H
#include "MainClass/Vehicle/Vehicle.h"
#include "FileIO/DeSerialize.h"

class Moto : public Vehicle, public DeSerialize{
private:
    bool hasSideCar;
public:
    Moto(std::string number, Visitors* visitor, std::string color, std::string model, bool hasSideCar, int idParking)
        : Vehicle(number, visitor, color, model, idParking), hasSideCar(hasSideCar) {}

    void setHasSideCar(bool newHasSideCar);
    bool getHasSideCar() const;

    ~Moto() override;

    std::string serialize() override;
    void deserialize(std::string &string) override;
};


#endif //AUTOPARKING_NIGHT_MOTO_H
