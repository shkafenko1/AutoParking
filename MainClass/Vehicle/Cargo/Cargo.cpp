#include "Cargo.h"
int Cargo::getHeight() const {
    return height;
}
int Cargo::getWeight() const {
    return weight;
}

std::string Cargo::serialize() {
    return  std::to_string(getIdParking()) + "|" + getRegNumber() + "|" + getVisitor()->getPhoneNum() + "|" + getColor() + "|" + getModel() + "|" + std::to_string(getHeight()) + "|" + std::to_string(getWeight());
}

void Cargo::deserialize(std::string &string) {
    std::string parts[7];
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
    id = std::stoi(parts[5]);
    setHeight(id);
    id = std::stoi(parts[6]);
    setWeight(id);

}

void Cargo::setHeight(int newHeight) {
    height = newHeight;
}

void Cargo::setWeight(int newWeight) {
    weight = newWeight;
}

Cargo::~Cargo() = default;
