// This code will take the array of strings related to a cars description, a parking meter time and a police officer name and badge number.
#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"

using namespace std;
// This is the main function
int main() {
    //This is the car array that stores the cars information
    ParkedCar car("Hyundai", "Sonata", "silver", "A12345", 120);
    //This is the meter variable that stores the minutes purchase information information
    ParkingMeter meter(60);
    //This is the officer array that stores the officer information
    PoliceOfficer officer("Mark Smith", "B123456");

    // This will check if a ticket will be printed
    if (car.getMinutesParked() > meter.getMinutesPurchased()) {
        ParkingTicket ticket(car, meter, officer);
        ticket.displayTicket();
    } 
    else {
        cout << "No ticket issued. The car is parked legally.\n";
    }

    return 0;
}
