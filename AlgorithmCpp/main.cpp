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

int main(int argc, const char * argv[]) {
//    vector<int> arr;
//    srand(123);
//    for(int i = 0; i < 10; ++i){
//        arr.push_back(rand()%20);
//    }
//    printIntVector(arr);
//    cout << endl;
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
    
//    DeleteFromArray(15, arr);
//    printIntVector(arr);
    
    
//    int f, fRe;
//    for(int i = 1; i < 11; ++i){
//        f = FibonacciNumber(i);
//        fRe = FibonacciNumberRe(i);
//        cout << i <<": " << f << " " << fRe<< endl;
//    }
    
//    vector<int> fs = FibonacciSeries(1);
//    printIntVector(fs);
//    fs = FibonacciSeries(2);
//    printIntVector(fs);
//    fs = FibonacciSeries(3);
//    printIntVector(fs);
//    fs = FibonacciSeries(10);
//    printIntVector(fs);
    

//    vector<int> placement(6, 0);
//    NonattackingQueens(6, 0, placement);
    
//    vector<int> arr;
//    srand(123);
//    for(int i = 0; i < 1; ++i){
//        arr.push_back(rand()%10);
//    }
//    printIntVector(arr);
//    
//    while(NextPermutation(arr))
//        printIntVector(arr);
    
//    vector<int> arr;
//    
//    for(int i = 0; i < 3; ++i){
//        arr.push_back(i);
//    }
//    PowerSet(arr);
//    PowerSetWithoutFlag(arr);
    
//    EnumerateSubsets(5, 2);
    
//    ListNode<int> *L1 = nullptr;
//    ListNode<int> *tail1 = nullptr;
//    for(int i = 0; i <10; i = i+2){
//        if(L1 == nullptr){
//            L1 = new ListNode<int>();
//            L1->data = i;
//            L1->next = nullptr;
//            tail1 = L1;
//        }
//        else {
//            tail1->next = new ListNode<int>();
//            tail1 = tail1->next;
//            tail1->data = i;
//            tail1->next = nullptr;
//        }
//    }
//    
//    ListNode<int> *L2 = nullptr;
//    ListNode<int> *tail2 = nullptr;
//    for(int i = 1; i <10; i = i+2){
//        if(L2 == nullptr){
//            L2 = new ListNode<int>();
//            L2->data = i;
//            L2->next = nullptr;
//            tail2 = L2;
//        }
//        else {
//            tail2->next = new ListNode<int>();
//            tail2 = tail2->next;
//            tail2->data = i;
//            tail2->next = nullptr;
//        }
//    }
//    
//    printIntLinkedList(L1);
//    printIntLinkedList(L2);
//
//    ListNode<int> *merged = MergeTwoLinkedList(L1, L2);
//    printIntLinkedList(merged);
//    ListNode<int> * reversedMerged = ReverseLinkedList(merged);
//    printIntLinkedList(reversedMerged);
//    reversedMerged = ReverseLinkedListRe(reversedMerged);
//    printIntLinkedList(reversedMerged);
//    
//    auto subReversed = ReverseSubLinkedList2(reversedMerged, 2, 6);
//    printIntLinkedList(subReversed);

//    std::vector<int> arr{8,1,3,4,5,1,20};
//    printIntVector(arr);
//    cout << FindSmallestPositiveInteger(arr) << endl;
//    cout << MaxDifference(arr) << endl;
//    
//    std::string s = "lin";
//    std::vector<std::string> result;
//    AllSubstring(s, result);
//    for(int i = 0; i < result.size(); ++i){
//        cout << result[i] << endl;
//    }
    
//    vector<int> v1 = {1,2,3};
//    vector<int> v2 = v1;
//    vector<double> v3(v1.begin(), v1.end());
//    printIntVector(v1);
//    printIntVector(v2);
//    for(auto i = v3.cbegin(); i != v3.cend(); ++i)
//        cout << *i << " ";
//    cout << endl;
//    v2[0]=100;
//    v1 = v2;
////    v3 = v1;
//    v3.assign(v1.begin(), v1.end());
//    for(auto i = v3.cbegin(); i != v3.cend(); ++i)
//        cout << *i << " ";
//    cout << endl;

//    vector<B> vB;
//    
//    for(int i = 0; i < 10; ++i){
//        cout << "Push back " << i << endl;
//        vB.emplace_back(i);
//        cout << "Capacity: " << vB.capacity() << endl;
//    }
//    cout << "lala" << endl;
//    vB.emplace_back(b1);
//
//    for(auto itr = vB.begin(); itr != vB.end(); ++itr){
//        itr->printI();
//    }
//    b1.i = 4;
//    for(auto itr = vB.begin(); itr != vB.end(); ++itr){
//        itr->printI();
//    }
    
//    std::string s("linmeng");
//    s.insert(0, "Hello, ");
//    s.append("!");
//    cout << s << endl;
//    cout << s[s.size()]<< endl;
//    try {
//        cout << s.at(100) << endl;
//    } catch (...) {
//        cout <<  "exception" << endl;
//    }

    
    std::vector<int> vec; std::list<int> lst; int i;
    while(std::cin>>i){
        vec.push_back(i);
    }
//    lst.resize(vec.size());
    std::copy(vec.cbegin(), vec.cend(), std::back_inserter(lst));
    for(auto i = lst.cbegin(); i != lst.cend(); ++i){
        cout << *i << " ";
    }
    cout << endl;
    
    return 0;
}
