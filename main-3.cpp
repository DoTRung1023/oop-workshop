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
#include "Game.h"

using namespace std;

int main(){
    // Create a Game object
    Game newGame;
    // Initialize the game with 5 ships and 5 mines in a 20x20 grid
    newGame.initGame(5, 5, 20, 20);
    // Run the game loop for 15 iterations with a mine distance threshold of 2.5
    newGame.gameLoop(15, 2.5);

    return 0;
}