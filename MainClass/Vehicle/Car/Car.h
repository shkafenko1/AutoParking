#ifndef AUTOPARKING_NIGHT_CAR_H
#define AUTOPARKING_NIGHT_CAR_H
#include "MainClass/Vehicle/Vehicle.h"
#include "FileIO/DeSerialize.h"

class Car : public Vehicle, public DeSerialize{
private:
    std::string boardType;
public:
    Car(std::string& number, Visitors* visitor, std::string& color, std::string& model, std::string& boardType, int idParking)
        : Vehicle(number, visitor, color, model, idParking), boardType(boardType) {}

    std::string getBoardType();
    void setBoardType(std::string& newBoardType);

    ~Car() override;

    std::string serialize() override;
    void deserialize(std::string &string) override;
};
#endif //AUTOPARKING_NIGHT_CAR_H
