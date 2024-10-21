#ifndef __EFFECT_H__
#define __EFFECT_H__

#include <iostream>
#include "GameEntity.h"

using namespace std;

class Effect
{
public:
    virtual void apply(GameEntity& entity) = 0;
};

#endif