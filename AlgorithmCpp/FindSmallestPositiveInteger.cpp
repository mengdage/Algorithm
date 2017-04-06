//
//  FindSmallestPositiveInteger.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/4/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "FindSmallestPositiveInteger.hpp"

int FindSmallestPositiveInteger(std::vector<int> A){
    int i = 0;
    while(i<A.size()){
        if(0<A[i] && A[i]<=A.size()){
            if(A[i] != A[A[i]-1]){
                int tmp = A[i];
                A[i] = A[tmp-1];
                A[tmp-1] = tmp;
            } else {
                ++i;
            }
        } else {
            ++i;
        }
        
    }
    i = 0;
    while(i<A.size()){
        if(A[i] != i + 1){
            return i+1;
        }
        ++i;
    }
    return i+1;
}
