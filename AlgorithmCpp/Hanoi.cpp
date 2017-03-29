//
//  Hanoi.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 3/28/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "Hanoi.hpp"
void Move(int n, std::vector<std::stack<int>> &poles, int from, int to, int use);
void GameHanoi(int n){
    std::vector<std::stack<int>> poles;
    std::stack<int> p1, p2, p3;
    poles.push_back(p1);
    poles.push_back(p2);
    poles.push_back(p3);
    
    for(int i = 0; i <n; ++i){
        poles[0].push(i);
    }
    Move(n, poles, 0, 1,2);
}

void MoveRe(int n, std::vector<std::stack<int>> &poles, int from, int to, int use){
    if(n > 0){
        Move(n-1, poles, from, use, to);
        poles[to].push(poles[from].top());
        poles[from].pop();
        std::cout << "Move from " << from << " to " << to <<std::endl;
        Move(n-1, poles, use, to, from);
    }
    
}

void Move(int n, std::vector<std::stack<int>> &poles, int from, int to, int use){
    
}
