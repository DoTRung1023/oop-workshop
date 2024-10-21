#ifndef __GAMEENTITY_H__
#define __GAMEENTITY_H__

#include <iostream>
#include <utility>
#include <tuple>

using namespace std;

enum GameEntityType{
    ExplosionType,
    MineType,
    NoneType,
    ShipType
};

class GameEntity
{
protected:
    std::tuple<int, int> position;
    GameEntityType type;
public:
    GameEntity(int x, int y, char type){
        position = {x, y};
        switch(type){
            case 'E':
                this->type = GameEntityType::ExplosionType;
                break;
            case 'M':
                this->type = GameEntityType::MineType;
                break;
            case 'N':
                this->type = GameEntityType::NoneType;
                break;
            case 'S':
                this->type = GameEntityType::ShipType;
                break;
            default:
                cout << "invalid type" << endl;
        }
    }
    std::tuple<int, int> getPos(){
        return position;
    }
    GameEntityType getType(){
        return type;
    }
};

#endif