//
//  BinarySearch.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/12/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "BinarySearch.hpp"

int binarySearch(std::vector<int> input, int target){
    if(input.size()<1) return -1;
    int lo = 0, hi = input.size()-1;
    while(lo <= hi){
        int mid = (hi-lo)/2+lo;
        if(input[mid] == target) return mid;
        if(input[mid] < target) {
            lo = mid + 1;
        }
        else {
            hi = mid-1;
        }
    }
    return -1;
}

int binarySearchFirst(std::vector<int> input, int target){
    if(input.size()<1) return -1;
    int lo = 0, hi = input.size()-1;
    while(lo < hi){
        int mid = (hi-lo)/2+lo;
        
        if(input[mid] == target) hi = mid;
        if(input[mid] < target) lo = mid+1;
        if(input[mid] > target) hi = mid-1;
    }
    return lo;
}

int binarySearchLast(std::vector<int> input, int target){
    if(input.size()<1) return -1;
    int lo = 0, hi = input.size()-1;
    while(lo < hi){
        int mid = (hi-lo)/2+lo;
        
        if(input[mid] == target) lo = mid;
        if(input[mid] < target) lo = mid+1;
        if(input[mid] > target) hi = mid-1;
    }
    return lo;
}
