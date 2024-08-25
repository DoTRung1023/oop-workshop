#include <iostream>
#include <string>
#include "player.h"

using namespace std;

#ifndef WIZARD_H
#define WIZARD_H

class Wizard: public Player
{
private:
    int mana;
public:
    Wizard(string name, int health, int damage, int mana);
    int getMana();
    void setMana(int mana);
    void castSpell(Player* opponent);
};

#endif