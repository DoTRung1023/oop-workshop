#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

using namespace std;

#ifndef HOUSE_H
#define HOUSE_H

class House
{
private:
    Appliance** appliances;
    int numAppliances;
    int currentNum;
public:
    House(); // create an empty House object
    House(int numAppliances); // creates a House object with space for numAppliances appliances

    bool addAppliance(Appliance* appliance); // adds an Appliance object to the House.
                        // return true if there is space in the house otherwise return false

    double getTotalPowerConsumption(); // return the total power consumption 
                                    // of all appliances in the House

    int get_currentNumAppliances();

    ~House();
};

#endif