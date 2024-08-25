#include <iostream>
#include "player.h"
#include "wizard.h"
#include "warrior.h"

using namespace std;

int main() {
    //Wizard(name, health, damage, mana)
    Wizard wizard("Gandalf", 100, 20, 50);
    //Warrior(name, health, damage, weapon)
    Warrior warrior("Aragorn", 120, 25, "Sword");
    
    cout << "Let the battle begin!" << endl;
    
    while (wizard.get_health() > 0 && warrior.get_health() > 0) {
        wizard.castSpell(&warrior);
        if (warrior.get_health() > 0) {
            warrior.swingWeapon(&wizard);
        }
    }
    
    if (wizard.get_health() > 0) {
        cout << wizard.get_name() << " wins!" << endl;
    } else {
        cout << warrior.get_name() << " wins!" << endl;
    }
    
    return 0;
}
