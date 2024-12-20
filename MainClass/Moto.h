#ifndef AUTOPARKING_NIGHT_MOTO_H
#define AUTOPARKING_NIGHT_MOTO_H
#include "Vehicle.h"
class Moto {
private:
    bool hasSideCar;
public:
    Moto(std::string number, Visitor* visitor, std::string color, std::string model, bool hasSideCar)
        : Vehicle(number, visitor, color, model), hasSideCar(hasSideCar) {}
    bool getHasSideCar();
};


#endif //AUTOPARKING_NIGHT_MOTO_H
