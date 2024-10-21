#ifndef __MINE_H__
#define __MINE_H__

#include <iostream>
#include "GameEntity.h"
#include "Explosion.h"
#include "Effect.h"

using namespace std;

class Mine:public GameEntity
{
public:
    Mine(int x, int y):GameEntity(x, y, 'M'){}
    Explosion explode(){
        type = GameEntityType::NoneType;
        return Explosion(std::get<0>(this -> position), std::get<1>(this -> position));
    }
};

#endif