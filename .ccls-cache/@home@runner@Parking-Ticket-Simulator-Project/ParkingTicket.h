#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"

class ParkingTicket {
private:
    ParkedCar car;
    ParkingMeter meter;
    PoliceOfficer officer;

public:
    ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o);
    void displayTicket() const;
};

#endif // PARKINGTICKET_H


