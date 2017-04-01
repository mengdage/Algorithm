//
//  PowerSet.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 3/31/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "PowerSet.hpp"
void printHelper(const std::vector<int> &v, const std::vector<bool> &flag);
void powerSetHelper(int index, std::vector<int> &v, std::vector<bool> &flag);
void powerSetWFHelper(int index, std::vector<int> &v, std::vector<int> &oneSet);
void printWFHelper(const std::vector<int> &oneSet);

void PowerSet(std::vector<int> &v){
    // indicator vector indicating whether an element is in the result
    std::vector<bool> flag(v.size(), false);
    powerSetHelper(0, v, flag);
    
}

void PowerSetWithoutFlag(std::vector<int> &v){
    std::vector<int> oneSet;
    std::cout << "PowerSetWithoutFlag start" << std::endl;
    powerSetWFHelper(0, v, oneSet);
    std::cout << "PowerSetWithoutFlag end" <<std::endl;
    
}

void powerSetHelper(int index, std::vector<int> &v, std::vector<bool> &flag){
    if(index == v.size()){
        printHelper(v, flag);
        return;
    }

    powerSetHelper(index+1, v, flag);
    flag[index] = ~flag[index];
    powerSetHelper(index+1, v, flag);
}

void powerSetWFHelper(int index, std::vector<int> &v, std::vector<int> &oneSet){
    
    
    
    
    
    printWFHelper(oneSet);
    for(int i = index; i < v.size(); ++i){
        oneSet.push_back(v[i]);
        powerSetWFHelper(i+1, v, oneSet);
        oneSet.pop_back();
    }
//    if(index == v.size()) {
//        printWFHelper(oneSet);
//        return;
//    }
//    powerSetWFHelper(index+1, v, oneSet);
//    oneSet.push_back(v[index]);
//    powerSetWFHelper(index+1, v, oneSet);
//    oneSet.pop_back();
   
}

void printHelper(const std::vector<int> &v, const std::vector<bool> &flag){
    for(int i = 0; i < flag.size(); ++i){
        if(flag[i]){
            std::cout << v[i] << " ";
        }
    }
    std::cout << std::endl;
}
void printWFHelper(const std::vector<int> &oneSet){
    for(auto i = oneSet.cbegin(); i != oneSet.cend(); ++i){
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}
