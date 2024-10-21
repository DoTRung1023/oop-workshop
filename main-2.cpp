#include <iostream>
#include <string>
#include <utility>
#include <tuple>
#include <vector>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Mine.h"
#include "Ship.h"
#include "Explosion.h"

using namespace std;

int main(){
    Mine mine(5, 8);
    Ship ship(2, 10);

    Explosion expl = mine.explode();
    ship.move(10, 10);

    if(mine.getType() == GameEntityType::NoneType){
        cout <<  "NoneType" << endl;
    }
    else{
        cout << "other types" << endl;
    }
    cout << "ship: " << get<0>(ship.getPos()) << ", " << get<1>(ship.getPos()) << endl;
    cout << "expl: " << get<0>(expl.getPos()) << ", " << get<1>(expl.getPos()) << endl;
    cout << "mine: " << get<0>(mine.getPos()) << ", " << get<1>(mine.getPos()) << endl;

    return 0;
}