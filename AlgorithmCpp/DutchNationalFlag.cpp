//
//  DutchNationalFlag.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 3/28/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//


#include "DutchNationalFlag.hpp"


void DutchFlag(int pivet_index, std::vector<int> & A){
    int x = A[pivet_index];
    
    // group bottom: [0, bottom-1]
    // group middle: [bottom, middle-1]
    // group unclassified: [middle, top-1]
    // group top: [top, A.size()-1]
    int bottom = 0, middle=0, top = static_cast<int>(A.size());
    int tmp;
    std::cout << "start sorting (pivot: " << x << ")..." << std::endl;
    while(middle <= top-1){
        if(A[middle] <x){
            tmp = A[bottom];
            A[bottom] = A[middle];
            A[middle] = tmp;
            
            bottom++;
            middle++;
        }
        else if(A[middle] == x){
            middle ++;
        }
        else {
            tmp = A[top-1];
            A[top-1] = A[middle];
            A[middle] = tmp;
            
            top --;
        }
    }
    std::cout << "sorting completed" << std::endl;
    
}
