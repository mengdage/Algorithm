//
//  EnumerateSubsets.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 3/31/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "EnumerateSubsets.hpp"

void printHelper(std::vector<int> oneSet);
void EnumerateSubsetsHelper(int n, int k, int index, std::vector<int> oneSet);

void EnumerateSubsets(int n, int k){
    std::vector<int> oneSet;
    EnumerateSubsetsHelper(n, k, 0, oneSet);
    
}

void EnumerateSubsetsHelper(int n, int k, int index, std::vector<int> oneSet){
    
    
    if(oneSet.size() == k){
        printHelper(oneSet);
        return;
    }
    
    for(int i = index; i < n && k - oneSet.size() <= n -i; ++i){
        oneSet.push_back(i);
        EnumerateSubsetsHelper(n, k, i + 1, oneSet);
        oneSet.pop_back();
    }
    
}

void printHelper(std::vector<int> oneSet){
    for(auto i : oneSet){
        std::cout << i << " " ;
    }
    std::cout << std::endl;
}
