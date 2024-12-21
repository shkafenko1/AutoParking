#include "Moto.h"

bool Moto::getHasSideCar() const {
    return hasSideCar;
}

void Moto::setHasSideCar(bool newHasSideCar) {
    hasSideCar = newHasSideCar;
}

Moto::~Moto() = default;
