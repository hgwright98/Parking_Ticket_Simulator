#ifndef PARKEDCAR_H 
#define PARKEDCAR_H

#include <string>

using namespace std;

// This declares the ParkedCar class
class ParkedCar {
private:
    // This stores the make of the ParkedCar object
    string make;
    // This stores the model of the ParkedCar object
    string model;
    // This stores the color of the ParkedCar object
    string color;
    // This stores the license number of the ParkedCar object
    string licenseNumber;
    // This stores the number of minutes the car has been parked
    int minutesParked; 

public:
    // Default values are provided for all parameters 
    ParkedCar(string mk = "MAKE", string ml = "MODEL", string co = "COLOR", string ln = "LICENSE", int mn = 0);

    // Public getter functions to access the values of the private member variables
    // This returns the number of minutes the car has been parked
    int getMinutesParked() const;
    // This returns the make of the car
    string getMake() const;
    // This returns the model of the car
    string getModel() const;
    // This returns the color of the car
    string getColor() const;
    // This returns the license number of the car
    string getLicenseNumber() const;
};

#endif // PARKEDCAR_H 

