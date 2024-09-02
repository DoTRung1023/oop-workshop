#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

using namespace std;

int main(){
    Appliance* tv1 = new TV(3, 50.6);
    cout << "Power rating: " << tv1->get_powerRating() << endl;
    cout << "Power consumption: " << tv1->getPowerConsumption() << endl;

    tv1->set_powerRating(0);
    cout << "Power rating: " << tv1->get_powerRating() << endl;
    cout << "Power consumption: " << tv1->getPowerConsumption() << endl;

    TV tv2;
    cout << "Screen size: " << tv2.getScreenSize() << endl;
    cout << "Power rating: " << tv2.get_powerRating() << endl;
    cout << "Power consumption: " << tv2.getPowerConsumption() << endl;

    tv2.set_powerRating(5);
    tv2.setScreenSize(80);
    cout << "Screen size: " << tv2.getScreenSize() << endl;
    cout << "Power rating: " << tv2.get_powerRating() << endl;
    cout << "Power consumption: " << tv2.getPowerConsumption() << endl;

    return 0;
}