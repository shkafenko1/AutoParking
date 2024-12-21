//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_PARKINGSPOT_H
#define AUTOPARKING_NIGHT_PARKINGSPOT_H


#include "MainClass/Vehicle/Vehicle.h"

class ParkingSpot {
private:
    int idParking;
    int idPlace;
    Vehicle* vehicle;
public:
    void setIdParking(int newIdParking);
    int getIdParking();

    void setIdPlace(int newIdParking);
    int getIdPlace();

    void setVehicle(Vehicle* veh);
    Vehicle* getVehicle();

    ParkingSpot(int idParking, int idPlace, Vehicle* veh) : idParking(idParking), idPlace(idPlace), vehicle(veh){};
    ~ParkingSpot() = default;
};


#endif //AUTOPARKING_NIGHT_PARKINGSPOT_H
