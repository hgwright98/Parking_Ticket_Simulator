#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include <string>

using namespace std;

class PoliceOfficer {
private:
    string name;
    string badgeNumber;

public:
    PoliceOfficer(string n = "Officer Name", string b = "Badge Number");
    string getName() const;
    string getBadgeNumber() const;
};

#endif // POLICEOFFICER_H
