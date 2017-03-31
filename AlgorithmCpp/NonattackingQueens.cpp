//
//  NonattackingQueens.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 3/30/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "NonattackingQueens.hpp"

void printPlacement(const std::vector<int> &placement);
bool ifFeasible(std::vector<int> &placement, int check);
void NonattackingQueens(int n, int rowIndex, std::vector<int> &placement){
    if( rowIndex == n) { //
        // n queens placed
        printPlacement(placement);
        return;
    }
    for(int col = 0; col < n; ++col){
        placement[rowIndex] = col;
        if(ifFeasible(placement, rowIndex)){
            NonattackingQueens(n, rowIndex+1, placement);
        }
        

    }
}

void printPlacement(const std::vector<int> &placement){
    int n = static_cast<int>(placement.size());
    int i = 0;
    while( i < n ){
        std::string line(n, 'o');
        line[placement[i++]] = 'x';
        std::cout << line << std::endl;
    }
    std::cout << std::endl;
    
    
}

bool ifFeasible(std::vector<int> &placement, int check){
    int difference;
    for(int i = 0; i < check; ++i){
        difference = std::abs(placement[i] - placement[check]);
        if(difference == 0 || difference == check - i){
            return false;
        }
    }
    return true;
}
