#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

using namespace std;

#ifndef TV_H
#define TV_H

class TV: public Appliance
{
private:
    double screenSize; // screen size in inches
public:
    TV();
    TV(int powerRating, double screenSize);

    void setScreenSize(double screenSize);
    double getScreenSize();

    double getPowerConsumption();
};

#endif