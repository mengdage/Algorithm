//
//  MaxDifference.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/4/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "MaxDifference.hpp"

int MaxDifference(std::vector<int> arr){
    int min = arr[0];
    int maxDiff = std::numeric_limits<int>::min();
    for(int i = 0; i < arr.size(); ++i){
        min = std::min(min, arr[i]);
        maxDiff = std::max(maxDiff, arr[i] - min);
    }
    return maxDiff;
}
