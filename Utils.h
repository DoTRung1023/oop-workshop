#ifndef __UTILS_H__
#define __UTILS_H__

#include <iostream>
#include <utility>
#include <tuple>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class Utils
{
public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
        std::srand(std::time(0));
        int rand_x = std::rand()%gridWidth;
        int rand_y = std::rand()%gridHeight;
        std::tuple<int, int> randPos(rand_x, rand_y);
        return randPos;
    }
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
        int pos1_x = get<0>(pos1);
        int pos1_y = get<1>(pos1);
        int pos2_x = get<0>(pos2);
        int pos2_y = get<1>(pos2);

        double distance = sqrt(pow(pos1_x-pos2_x, 2)+pow(pos1_y-pos2_y, 2));
        
        return distance;
    }
};

#endif