#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

using namespace std;

Fridge::Fridge(): Appliance(0), volume(0){}
Fridge::Fridge(int powerRating, double volume): Appliance(powerRating), volume(volume){}

void Fridge::setVolume(double volume){
    this->volume = volume;
}
double Fridge::getVolume(){
    return volume;
}

double Fridge::getPowerConsumption(){
    return powerRating * 24 * (volume / 100);
}
