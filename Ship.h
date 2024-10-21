#ifndef __SHIP_H__
#define __SHIP_H__

#include <iostream>
#include "GameEntity.h"

using namespace std;

class Ship:public GameEntity
{
public:
    Ship(int x, int y):GameEntity(x, y, 'S'){}
    void move(int dx, int dy){
        std::get<0>(this->position) += dx;
        std::get<1>(this->position) += dy;    
    }
};

#endif