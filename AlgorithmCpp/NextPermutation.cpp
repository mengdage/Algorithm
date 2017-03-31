//
//  NextPermutation.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 3/30/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "NextPermutation.hpp"

void vSwap(std::vector<int> &v, int a, int b);
void reverse(std::vector<int> &v, int left, int right);


bool NextPermutation(std::vector<int> &vNumber){
    int len = static_cast<int>(vNumber.size());
    
    if(len <2) return false;
    
    // find the longest decreasing suffix
    int i = len -2;
    while(i>=0 && vNumber[i] >= vNumber[i+1]){
        --i;
    }
    if(i<0)
        // largest number
        return false;
    
    // the longest decreasing suffix is vNumber[decreasingSuffixIndex : len -1]
    int decreasingSuffixIndex = i + 1;
    
    // swap vNumber[i] with the smallest vNumber[j] (j between (decreasingSuffixIndex : len -1))
    int j = len-1;
    while(vNumber[j] <= vNumber[i]) j++;
    // swap
    vSwap(vNumber, i, j);
    
    // reverse vNumber[decreasingSuffixIndex : len -1]
    reverse(vNumber, decreasingSuffixIndex, len-1);
    return true;
}

void vSwap(std::vector<int> &v, int a, int b){
    int tmp = v[a];
    v[a] = v[b];
    v[b] = tmp;
}
void reverse(std::vector<int> &v, int left, int right){
    while(left < right){
        vSwap(v, left++, right--);
    }
}
