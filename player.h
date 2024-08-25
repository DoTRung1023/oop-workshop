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

    string get_name() ;
    int get_health();
    int get_damage();

    void set_name(string name);
    void set_health(int health);
    void set_damage(int damage);
};

#endif