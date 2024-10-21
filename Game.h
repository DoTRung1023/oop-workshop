#ifndef __GAME_H__
#define __GAME_H__

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

class Game 
{
private:
    std::vector<GameEntity*> entities;
public:
    void set_entities(std::vector<GameEntity*> entities){
        this->entities = entities;
    }
    std::vector<GameEntity*> get_entities(){
        return entities;
    }
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){

        for(int i = 0; i<numShips; i++){
            tuple<int, int> randPos = Utils::generateRandomPos(gridWidth, gridHeight);
            int x = get<0>(randPos);
            int y = get<1>(randPos);
            GameEntity* newShip = new Ship(x, y);
            entities.push_back(newShip);
        }
        for(int i = 0; i<numMines; i++){
            tuple<int, int> randPos = Utils::generateRandomPos(gridWidth, gridHeight);
            int x = get<0>(randPos);
            int y = get<1>(randPos);
            GameEntity* newMine = new Mine(x, y);
            entities.push_back(newMine);    
        }

        return entities;
    }
    void gameLoop(int maxIterations, double mineDistanceThreshold){
        for(int i = 0; i<maxIterations; i++){
            int ship_count = 0;
            for (GameEntity *ship:entities){
                if (ship->getType() == GameEntityType::ShipType){
                    static_cast<Ship*>(ship)->move(0,1);
                    ship_count++;
                }    
            }
            if(ship_count == 0){
                break;
            }
            for (GameEntity *mine:entities){
                if (mine->getType() == GameEntityType::MineType){
                    for (GameEntity *ship:entities){
                        if (ship->getType() == GameEntityType::ShipType){
                            double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                            if (distance <= mineDistanceThreshold) {
                                Explosion explosion = static_cast<Mine*>(mine)->explode();
                                explosion.apply(*mine);
                            }
                        }    
                    }
                }
            }
        }
    }
};

#endif