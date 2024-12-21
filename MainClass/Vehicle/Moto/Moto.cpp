#include "Moto.h"

bool Moto::getHasSideCar() const {
    return hasSideCar;
}

void Moto::setHasSideCar(bool newHasSideCar) {
    hasSideCar = newHasSideCar;
}

std::string Moto::serialize() {
    return  std::to_string(getIdParking()) + "|" + getRegNumber() + "|" + getVisitor()->getPhoneNum() + "|" + getColor() + "|" + getModel() + "|" + std::to_string(getHasSideCar());
}

void Moto::deserialize(std::string &string) {
    std::string parts[6];
    int index = 0;
    int charParts = 0;
    while (string[charParts] != '\n'){
        if(string[charParts] == '|'){
            index++;
            charParts++;
            continue;
        }
        parts[index] += string[charParts];
        charParts++;
    }
    int id = std::stoi(parts[0]);
    setIdParking(id);
    setRegNumber(parts[1]);
    auto* visitor = new Visitors();
    setVisitor(visitor);
    visitor->setPhoneNum(parts[2]);
    setColor(parts[3]);
    setModel(parts[4]);
    setHasSideCar(parts[5] == "1");
}

Moto::~Moto() = default;
