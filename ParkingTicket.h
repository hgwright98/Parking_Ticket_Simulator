#ifndef PARKINGTICKET_H 
#define PARKINGTICKET_H

// This ncludes the header file for the ParkedCar class, which gets the infor for the parked car
#include "ParkedCar.h"
// This includes the header file for the ParkingMeter class, which get the information for the parking meter
#include "ParkingMeter.h"
// This includes the header file for the PoliceOfficer class, which get the information for the police officer
#include "PoliceOfficer.h" 

// This declars the ParkingTicket class
class ParkingTicket {
private:
    // This stores the information for the ParkedCar object as car
    ParkedCar car;
    // This stores the information for the ParkingMeter object as meter
    ParkingMeter meter;
    // This stores the information for the PoliceOfficer object as officer
    PoliceOfficer officer;

public:
    // This is the constructor for initializing a ParkingTicket object with the provided ParkedCar, ParkingMeter, and PoliceOfficer objects
    ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o);

    // This function displays the details of the parking ticket
    void displayTicket() const;
};
#endif // PARKINGTICKET_H