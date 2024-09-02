#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"

using namespace std;

int main(){
    House house(5);

    Appliance* tv1 = new TV(2, 4.8);
    Appliance* tv2 = new TV(5, 9.3);
    Appliance* tv3 = new TV(3, 12.4);
    Appliance* fr1 = new Fridge(2, 10.6);
    Appliance* fr2 = new Fridge(6, 4.7);
    Appliance* fr3 = new Fridge(7, 4.8);

    house.addAppliance(tv1);
    if(house.addAppliance(tv1) == true) {
        cout << "Add successfully" << endl;
    }
    else {
        cout << "Add unsuccessfully" << endl;
    }
    house.addAppliance(tv2);
    if(house.addAppliance(tv2) == true) {
        cout << "Add successfully" << endl;
    }
    else {
        cout << "Add unsuccessfully" << endl;
    }
    house.addAppliance(tv3);
    if(house.addAppliance(tv3) == true) {
        cout << "Add successfully" << endl;
    }
    else {
        cout << "Add unsuccessfully" << endl;
    }
    house.addAppliance(fr1);
    if(house.addAppliance(fr1) == true) {
        cout << "Add successfully" << endl;
    }
    else {
        cout << "Add unsuccessfully" << endl;
    }
    house.addAppliance(fr2);
    if(house.addAppliance(fr2) == true) {
        cout << "Add successfully" << endl;
    }
    else {
        cout << "Add unsuccessfully" << endl;
    }
    house.addAppliance(fr3);
    if(house.addAppliance(fr3) == true) {
        cout << "Add successfully" << endl;
    }
    else {
        cout << "Add unsuccessfully" << endl;
    }

    cout << "Total power consumption: " << house.getTotalPowerConsumption() << endl;

    return 0;
}