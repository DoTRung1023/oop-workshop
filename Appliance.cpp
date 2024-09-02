#include <iostream>
#include "Appliance.h"

using namespace std;

Appliance::Appliance(){
    powerRating = 0;
    isOn = false;
}
Appliance::Appliance(int powerRating){
    this->powerRating = powerRating;
    isOn = false;
}
void Appliance::turnOn() {
    isOn = true;
}
void Appliance::turnOff() {
    isOn = false;
}
void Appliance::set_powerRating(int powerRating) {
    this->powerRating = powerRating;
}
int Appliance::get_powerRating(){
    return powerRating;
}

bool Appliance::get_isOn() {
    return isOn;
}

double Appliance::getPowerConsumption(){
    return 0;
}
