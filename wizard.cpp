#include <iostream>
#include <string>
#include "player.h"
#include "wizard.h"

using namespace std;

Wizard::Wizard(string name, int health, int damage, int mana){
    // Player(name, health, damage);
    setName(name);
    setHealth(health);
    setDamage(damage);
    this->mana = mana;
}

int Wizard::getMana(){
    return mana;
}
void Wizard::setMana(int mana) {
    this->mana = mana;
}
void Wizard::castSpell(Player* opponent){ 
    opponent->setHealth(opponent->getHealth()-getMana());
    std::cout << getName() << " casts a spell on " << opponent->getName() 
              << " for " << getDamage() << " damage.\n";
}

