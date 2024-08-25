#include <iostream>
#include <string>
#include "player.h"

using namespace std;

#ifndef WARRIOR_H
#define WARRIOR_H

class Warrior: public Player
{
private:
    string weapon;
public:
    Warrior(string name, int health, int damage, string weapon);
    string getWeapon();
    void setWeapon(string weapon);
    void swingWeapon(Player* opponent);
};

#endif