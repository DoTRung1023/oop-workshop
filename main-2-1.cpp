#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

using namespace std;

int main(){
    Appliance* f1 = new Fridge(3, 13.6);
    cout << "Power rating: " << f1->get_powerRating() << endl;
    cout << "Power consumption: " << f1->getPowerConsumption() << endl;

    f1->set_powerRating(0);
    cout << "Power rating: " << f1->get_powerRating() << endl;
    cout << "Power consumption: " << f1->getPowerConsumption() << endl;

    Fridge f2;
    cout << "Volume: " << f2.getVolume() << endl;
    cout << "Power rating: " << f2.get_powerRating() << endl;
    cout << "Power consumption: " << f2.getPowerConsumption() << endl;

    f2.set_powerRating(5);
    f2.setVolume(10);
    cout << "Volume: " << f2.getVolume() << endl;
    cout << "Power rating: " << f2.get_powerRating() << endl;
    cout << "Power consumption: " << f2.getPowerConsumption() << endl;

    return 0;
}