#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"

using namespace std;

House::House(){
    this->numAppliances = 0;
    this->currentNum = 0;
    this->appliances = new Appliance*[numAppliances];
}
House::House(int numAppliances){
    this->currentNum = 0;
    this->numAppliances = numAppliances;
    this->appliances = new Appliance*[numAppliances];
}

bool House::addAppliance(Appliance* appliance){
    if(currentNum < numAppliances) {
        appliances[currentNum] = appliance;
        currentNum++;
        return true;
    }
    else{
        return false;
    }
}

double House::getTotalPowerConsumption(){
    int totalPowerConsumption = 0;
    for(int i = 0; i<currentNum; i++) {
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }
    return totalPowerConsumption;
}

int House::get_currentNumAppliances(){
    return currentNum;
}

House::~House(){
    delete[] appliances;
}
