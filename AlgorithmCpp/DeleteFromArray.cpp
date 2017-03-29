//
//  DeleteFromArray.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 3/29/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "DeleteFromArray.hpp"

int DeleteFromArray(int key, std::vector<int> &A){
    int writeIndex  = 0;
    for(int i = 0; i < A.size(); ++i){
        if(A[i] != key){
            A[writeIndex++]=A[i];
        }
    }
    return writeIndex;
}
