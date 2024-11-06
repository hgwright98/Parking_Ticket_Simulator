#include "ParkedCar.h"
using namespace std;
// Constructor to initialize the attributes of a ParkedCar object
ParkedCar::ParkedCar(string mk, string ml, string co, string ln, int mn){
// This initializes the make, model, color, license number and minutes parked attributes of the ParkedCar object
    make = mk;
    model = ml;
    color = co;
    licenseNumber = ln;
    minutesParked = mn;
}
//This function returns the minutes parked attribute of the ParkedCar object
int ParkedCar::getMinutesParked() const {
    return minutesParked;
}
// This function returns the make of the ParkedCar object
string ParkedCar::getMake() const {
    return make;
}
//This function returns the model of the ParkedCar object
string ParkedCar::getModel() const {
    return model;
}
//This funciton returns the color of the ParkedCar object
string ParkedCar::getColor() const {
    return color;
}
//This function returns the license number of the ParkedCar object
string ParkedCar::getLicenseNumber() const {
    return licenseNumber;
}
