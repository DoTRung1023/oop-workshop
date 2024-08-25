#include <iostream>
#include <string>
#include "player.h"
#include "wizard.h"

using namespace std;

Wizard::Wizard(string name, int health, int damage, int mana){
    // Player(name, health, damage);
    set_name(name);
    set_health(health);
    set_damage(damage);
    this->mana = mana;
}

int Wizard::get_mana(){
    return mana;
}
void Wizard::set_mana(int mana) {
    this->mana = mana;
}
void Wizard::castSpell(Player* opponent){ 
    opponent->set_health(opponent->get_health()-get_mana());
    std::cout << get_name() << " casts a spell on " << opponent->get_name() 
              << " for " << get_damage() << " damage.\n";
}

