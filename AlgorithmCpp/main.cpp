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
#include <queue>
#include <array>
#include <list>
#include <algorithm>
#include <iterator>
#include <climits>
#include <stack>
#include <string>
#include "DutchNationalFlag.hpp"
#include "Hanoi.hpp"
#include "DeleteFromArray.hpp"
#include "Fibonacci.hpp"
#include "NonattackingQueens.hpp"
#include "NextPermutation.hpp"
#include "PowerSet.hpp"
#include "EnumerateSubsets.hpp"
#include "ListNode.h"
#include "MergeTwoLinkedList.hpp"
#include "ReverseLinkedList.hpp"
#include "FindSmallestPositiveInteger.hpp"
#include "MaxDifference.hpp"
#include "AllSubstring.hpp"
#include "StringtoInt.hpp"
#include "ReplaceAndRemove.hpp"
#include "ReverseWords.hpp"
#include "AllMnemonics.hpp"
#include "MedianOfTwoArray.hpp"
#include "sqrt.hpp"
#include "myPower.hpp"

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
void printIntLinkedList(const ListNode<int> *l){
    while(l){
        cout << l->data << " ";
        l = l->next;
    }
    cout << endl;
}
void foo1(int *arr) { cout << sizeof(arr) << '\n'; }
void foo2(int arr[]) { cout << sizeof(arr) << '\n'; }
void foo3(int arr[10]) { cout << sizeof(arr) << '\n'; }
void foo4(int (&arr)[10]) { cout << sizeof(arr) << '\n'; }

struct A{
    int i;
    A(int v):i(v){}
};
class B{
    
public:
    int i;
    B(int v){i=v;}
    ~B(){cout << i << ": I'm destroyed!"<< endl;}
    void printI(){
        cout<< i << endl;
    }
};

struct Container
{
    int n;
};
int binarySearchSum(int n, int t){
    int lo = 1, hi = n;
    int sum = 0;
    while(true){
        int mid = (hi + lo)/2 + ((hi+lo)%2 ? 1 : 0);
        if(mid == t) return sum;
        sum += mid;
        if(mid < t){
            lo = mid +1;
        } else {
            hi = mid-1;
        }
    }
}

int main(int argc, const char * argv[]) {
    int n = 10;
    for(int i = 1; i <= n; ++i){
        int s = binarySearchSum(n, i);
        cout << "target: " << i << " cost: " << s << endl;
    }
    return 0;
}
