#include <iostream>
#include <string>
#include "player.h"
#include "warrior.h"

using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon) {
    // Player(name, health, damage);
    setName(name);
    setHealth(health);
    setDamage(damage);
    this->weapon = weapon;
}
string Warrior::getWeapon() {
    return weapon;
    }

void Warrior::setWeapon(string weapon) {
    this->weapon = weapon;
    }

void Warrior::swingWeapon(Player* opponent){
    opponent->setHealth(opponent->getHealth()-getDamage());
    std::cout << getName() << " swings their " << getWeapon() 
              << " at " << opponent->getName() << "!\n";
}
