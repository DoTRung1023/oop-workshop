#include <iostream>
#include <string>

using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
    string name;
    int health;
    int damage;
public:
    Player();
    Player(string name, int health, int damage);
    void attack(Player* opponent, int(damage));
    void takeDamage(int damage);

    string getName() ;
    int getHealth();
    int getDamage();

    void setName(string name);
    void setHealth(int health);
    void setDamage(int damage);
};

#endif