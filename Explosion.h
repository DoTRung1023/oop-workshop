#ifndef __EXPLOSION_H__
#define __EXPLOSION_H__

#include <iostream>
#include "GameEntity.h"
#include "Effect.h"

using namespace std;

class Explosion:public GameEntity, public Effect
{
private:
public:
    Explosion(int x, int y) : GameEntity(x, y, 'E') {}
    void apply(GameEntity& entity) {
        entity = GameEntity(-1, -1, 'N');
    }
};

#endif