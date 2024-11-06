#ifndef PARKINGMETER_H 
#define PARKINGMETER_H

// This declars the ParkingMeter class
class ParkingMeter {
private:
    // This stores the number of minutes the car has been parked
    int minutesPurchased;

public:
    // This is the constructor for initializing a ParkingMeter object. It has a default argument of 0 for 'mn'
    ParkingMeter(int mn = 0);

    // This is the getter function for the number of minutes the car has been parked
    int getMinutesPurchased() const;
};

#endif // PARKINGMETER_H 