#include <iostream>
#include <string>
#include "player.h"
#include "warrior.h"

using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon) {
    // Player(name, health, damage);
    set_name(name);
    set_health(health);
    set_damage(damage);
    this->weapon = weapon;
}
string Warrior::get_weapon() {
    return weapon;
    }

void Warrior::set_weapon(string weapon) {
    this->weapon = weapon;
    }

void Warrior::swingWeapon(Player* opponent){
    opponent->set_health(opponent->get_health()-get_damage());
    std::cout << get_name() << " swings their " << get_weapon() 
              << " at " << opponent->get_name() << "!\n";
}
