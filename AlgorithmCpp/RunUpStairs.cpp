//
//  RunUpStairs.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/12/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "RunUpStairs.hpp"

int runUpStairsHelper(int n, std::vector<int> &cache);
int runUpStairs(int n){
    std::vector<int> cache(n+1, -1);
    runUpStairsHelper(n, cache);
    return cache[n];
}

int runUpStairsHelper(int n, std::vector<int> &cache){
    
    if(cache[n] != -1) return cache[n];
    
    if(n < 0){
        return 0;
    }
    if(n == 0){
//        cache[n] = 1;
        return 1;
    }
    
    cache[n] = runUpStairsHelper(n-1, cache) + runUpStairsHelper(n-2, cache) + runUpStairsHelper(n-3, cache);
    return cache[n];
    
    
}
