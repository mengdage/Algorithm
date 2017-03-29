//
//  main.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 3/27/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include <iostream>
#include <vector> // vector
#include <cstdlib> // srand, rand
#include <algorithm> // max
#include "DutchNationalFlag.hpp"
#include "Hanoi.hpp"
#include "DeleteFromArray.hpp"

using std::vector; using std::cout; using std::flush; using std::endl;
using std::srand; using std::rand;

int max(vector<int> &arr){
    int max = arr[0];
    for(auto i = arr.cbegin(); i != arr.cend(); ++i){
        if(max < *i) max = *i;
    }
    return max;
}

int maxRe(vector<int> &arr, int low, int hight){
    if(low == hight) return arr[low];
    
    int left = maxRe(arr, low, low + (hight-low)/2);
    int right = maxRe(arr, low+(hight-low)/2+1, hight);
    return std::max(left, right);
}
void printIntVector(const vector<int> &A){
    for(int i = 0; i < A.size(); ++i){
        cout << A[i] << " ";
    }
    cout << endl;
}

void foo1(int *arr) { cout << sizeof(arr) << '\n'; }
void foo2(int arr[]) { cout << sizeof(arr) << '\n'; }
void foo3(int arr[10]) { cout << sizeof(arr) << '\n'; }
void foo4(int (&arr)[10]) { cout << sizeof(arr) << '\n'; }


int main(int argc, const char * argv[]) {
    vector<int> arr;
    srand(123);
    for(int i = 0; i < 10; ++i){
        arr.push_back(rand()%20);
    }
    printIntVector(arr);
    cout << endl;
//
//    int m = max(arr);
//    int mRe = maxRe(arr, 0, (int)arr.size());
//    cout << "max: " << m << endl;
//    cout << "maxRe: " << mRe << endl;
//    
//    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    foo1(arr2);
//    foo2(arr2);
//    foo3(arr2);
//    foo4(arr2);
    
//    DutchFlag(2, arr);
//    for(int i = 0; i < arr.size(); ++i){
//        cout << arr[i] << " "<< flush;
//    }
//    cout << endl;
    
//    GameHanoi(3);
    
    DeleteFromArray(15, arr);
    printIntVector(arr);
    
    return 0;
}
