#include "ParkingMeter.h" 
// Constructor for the ParkingMeter class that initializes the 'minutesPurchased' member
ParkingMeter::ParkingMeter(int mn) {
    // This assigns the value of the parameter 'mn' to the 'minutesPurchased' member variable and 'mn' is the number of minutes the user has purchased for the parking meter
    minutesPurchased = mn;
}
// Getter function to return the number of minutes purchased for the parking meter
int ParkingMeter::getMinutesPurchased() const {
    // This returns the current value of the 'minutesPurchased' member variable
    return minutesPurchased;  
}
