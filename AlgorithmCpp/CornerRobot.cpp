//
//  CornerRobot.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/12/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "CornerRobot.hpp"
int cornerRobotNoLimitHelper(int size, int x, int y, std::vector<std::vector<int>> &square);

int cornerRobotNoLimit(int size){
    std::vector<std::vector<int>> square(size, std::vector<int>(size, 0));
    int r = cornerRobotNoLimitHelper(size, size-1, size-1, square);
    for(auto v : square){
        for(auto e : v){
            std::cout << e << "\t";
        }
        std::cout << std::endl;
    }
    return r;
}

int cornerRobotNoLimitHelper(int size, int x, int y, std::vector<std::vector<int>> &square){
    if(x<0 || y < 0) return 0;
    if(x == 0 && y ==0) return 1;
    if(square[x][y] != 0) return square[x][y];
    square[x][y] =cornerRobotNoLimitHelper(size, x-1, y, square) + cornerRobotNoLimitHelper(size, x, y-1, square);
    
    return square[x][y];
    
}
