#include "PoliceOfficer.h"  
using namespace std;

// This is the constructor for the PoliceOfficer class, which initializes the 'name' and 'badgeNumber' member variables
PoliceOfficer::PoliceOfficer(string n, string b)  {
    name = n;
    badgeNumber = b;
}

// This function returns the name of the police officer
string PoliceOfficer::getName() const {
    return name;
}

// This function returns the badge number of the police officer
string PoliceOfficer::getBadgeNumber() const {
    return badgeNumber;
}
