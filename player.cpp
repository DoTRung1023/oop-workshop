#include <iostream>
#include <string>
#include "player.h"

using namespace std;

Player::Player() {
    this->name = "";
    this->health = 0;
    this->damage = 0;
}
Player::Player(string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}
void Player::attack(Player* opponent, int damage){
    opponent->health -= damage;
}
void Player::takeDamage(int damage){
    this->health -= damage;
    cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}
string Player::get_name() {return name;}
int Player::get_health(){return health;}
int Player::get_damage(){return damage;}

void Player::set_name(string name){this->name = name;}
void Player::set_health(int health){this->health = health;}
void Player::set_damage(int damage){this->damage = damage;}
