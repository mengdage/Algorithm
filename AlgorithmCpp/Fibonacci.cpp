//
//  Fibonacci.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 3/30/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "Fibonacci.hpp"

int FibonacciNumber(int n){
    int f1 = 1, f2 = 1, f3=0;
    if(n <= 2)
        return 1;
    n = n-2;
    while(n-- > 0){
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f3;
}

int FibonacciNumberRe(int n) {
    if(n <=2) return 1;
    return FibonacciNumberRe(n-1) + FibonacciNumberRe(n-2);
}

std::vector<int> FibonacciSeries(int n){
    std::vector<int> f;
    int f1 = 1, f2 = 1, f3;
    if(n<=2){
        while(n-- >0) f.push_back(1);
        return f;
    }
    else{
        f.push_back(1); f.push_back(1);
        n = n-2;
    }
    
    while(n -- > 0){
        f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
        f.push_back(f3);
    }
    return f;
}

void FibonacciSeriesRe(int n, std::vector<int> &result){
    
}
