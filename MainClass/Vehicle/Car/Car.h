#ifndef AUTOPARKING_NIGHT_CAR_H
#define AUTOPARKING_NIGHT_CAR_H
#include "MainClass/Vehicle/Vehicle.h"
class Car : public Vehicle{
private:
    std::string boardType;
public:
    Car(std::string& number, Visitors* visitor, std::string& color, std::string& model, std::string& boardType, int idParking)
        : Vehicle(number, visitor, color, model, idParking), boardType(boardType) {}

    std::string getBoardType();
    void setBoardType(std::string& newBoardType);

    ~Car() override;
};
#endif //AUTOPARKING_NIGHT_CAR_H
