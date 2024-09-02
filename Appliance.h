#include <iostream>

using namespace std;

#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance
{
protected:
    int powerRating;
    bool isOn;
public:
    Appliance();
    Appliance(int powerRating); // create an appliance with a power rating
    void turnOn();
    void turnOff();

    bool get_isOn();

    void set_powerRating(int powerRating);
    int get_powerRating();
    virtual double getPowerConsumption();
};

#endif