#ifndef AUTOPARKING_NIGHT_MOTO_H
#define AUTOPARKING_NIGHT_MOTO_H
#include "MainClass/Vehicle/Vehicle.h"
class Moto : public Vehicle{
private:
    bool hasSideCar;
public:
    Moto(std::string number, Visitors* visitor, std::string color, std::string model, bool hasSideCar, int idParking)
        : Vehicle(number, visitor, color, model, idParking), hasSideCar(hasSideCar) {}

    void setHasSideCar(bool newHasSideCar);
    bool getHasSideCar() const;

    ~Moto() override;
};


#endif //AUTOPARKING_NIGHT_MOTO_H
