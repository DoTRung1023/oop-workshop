#include <iostream>
#include "Appliance.h"

using namespace std;

#ifndef FRIDGE_H
#define FRIDGE_H

class Fridge: public Appliance
{
private:
    double volume; // volume in litres
public:
    Fridge();
    Fridge(int powerRating, double volume);

    void setVolume(double volume);
    double getVolume();

    double getPowerConsumption();
};

#endif