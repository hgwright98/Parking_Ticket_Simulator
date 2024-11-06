#ifndef POLICEOFFICER_H  
#define POLICEOFFICER_H 

#include <string>

using namespace std;

// This declars the PoliceOfficer class
class PoliceOfficer {
private:
    //This stores the name of the PoliceOfficer object
    string name;      
    //This stores the badge number of the PoliceOfficer object
    string badgeNumber;

public:
    // This is the constructor that initializes the police officer with a name and badge number.
    PoliceOfficer(string n = "Officer Name", string b = "Badge Number");

    // This function returns the name of the police officer
    string getName() const;

    // This function returns the badge number of the police officer
    string getBadgeNumber() const;
};

#endif // POLICEOFFICER_H

