// Includes the header file for the ParkingTicket class
#include "ParkingTicket.h"  
#include <iostream> 
#include <cmath>
using namespace std;

// This is the constructor for the ParkingTicket class, which takes a ParkedCar, ParkingMeter, and PoliceOfficer as arguments
ParkingTicket::ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o) {
    // Thi initializes the 'car' member with the provided ParkedCar object 'c'
    car = c;
    // This initializes the 'meter' member with the provided ParkingMeter object 'm'
    meter = m;
     // This initializes the 'officer' member with the provided PoliceOfficer object 'o'
    officer = o;   
}

// This function displays the details of the parking ticket
void ParkingTicket::displayTicket() const {
    // This gets the number of minutes the car has been parked from the ParkedCar object
    int parkedMinutes = car.getMinutesParked();

    // This gets the number of minutes purchased for the parking meter from the ParkingMeter object
    int purchasedMinutes = meter.getMinutesPurchased();

    // This calculates the number of minutes the car is overparked (if any)
    int overparkedMinutes = max(0, parkedMinutes - purchasedMinutes);

    // This sets the base fine to $25 for the first hour or part of it
    int fine = 25;

    // An If-else statement that if the car has been overparked for more than 60 minutes it applies additional charges
    if (overparkedMinutes > 60) {
        // This adds 10 for each additional hour or part of an hour
        fine += (ceil((overparkedMinutes - 60) / 60.0) * 10);
    }

    // This displays the parking ticket details
    cout << "*** Parking Ticket ***\n";
    cout << "Officer " << officer.getName() << " Badge Number " << officer.getBadgeNumber() << "\n";
    cout << "Vehicle License Number: " << car.getLicenseNumber() << "\n";
    cout << "Make: " << car.getMake() << " Model: " << car.getModel() << " Color: " << car.getColor() << "\n";
    cout << "Meter Minutes: " << purchasedMinutes << " Minutes Parked: " << parkedMinutes << "\n";
    cout << "Parking Fee: $" << fine << "\n";
}

