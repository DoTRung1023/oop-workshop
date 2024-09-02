#include <iostream>
#include "Appliance.h"

using namespace std;

int main(){
    Appliance app;
    cout << "Power rating is: " << app.get_powerRating() << endl;
    cout << "Power consumption is: " << app.getPowerConsumption() << endl;

    app.set_powerRating(5);
    cout << "Power rating is: " << app.get_powerRating() << endl;

    Appliance app1(6);
    cout << "Power rating is: " << app1.get_powerRating() << endl;
    cout << "Power consumption is: " << app1.getPowerConsumption() << endl;

    return 0;
}