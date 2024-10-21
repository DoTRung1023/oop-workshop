#include <iostream>
#include <string>
#include <utility>
#include <tuple>
#include <vector>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

using namespace std;

int main(){
    GameEntity game1(30, 60, '0');
    tuple<int, int> pos1 = game1.getPos();
    int pos1_x = get<0>(pos1);
    int pos1_y = get<1>(pos1);

    Utils u1;
    tuple<int, int> pos2 = u1.generateRandomPos(40, 50);

    double distance = u1.calculateDistance(pos1, pos2);

    cout << distance << endl;

    return 0;
}