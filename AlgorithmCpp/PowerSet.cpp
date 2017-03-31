//
//  PowerSet.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 3/31/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "PowerSet.hpp"
void printHelper(const std::vector<int> &v, const std::vector<int> &flag);
void powerSetHelper(int index, std::vector<int> &v, std::vector<int> &flag);

void PowerSet(std::vector<int> &v){
    std::vector<int> flag(v.size(), 0);
    powerSetHelper(0, v, flag);
    
}

void powerSetHelper(int index, std::vector<int> &v, std::vector<int> &flag){
    if(index == v.size()){
        printHelper(v, flag);
        return;
    }
    for(int f = 0; f <= 1; ++f){
        flag[index] = f;
        powerSetHelper(index+1, v, flag);
    }
}

void printHelper(const std::vector<int> &v, const std::vector<int> &flag){
    for(int i = 0; i < flag.size(); ++i){
        if(flag[i]==1){
            std::cout << v[i] << " ";
        }
    }
    std::cout << std::endl;
}
