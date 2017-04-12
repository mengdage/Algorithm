//
//  myPower.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/11/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "myPower.hpp"
#include <vector>
double myPow(double x, int n) {
    if(x == 0) return 0;
    double r = 1;
    if(n<0){
        x = 1/x;
        n *= -1;
    }
    while(n>0){
        if(n & 1) r *= x;
        x*=x;
        n = n>>1;
    }
    
    return r;
}

double superPow(int a, int b){
    if(b == 1) return a%1337;
    if(b&1){
        return superPow(superPow(a, (b-1)/2) * superPow(a, (b-1)/2) * superPow(a, 1), 1);
    } else {
        return superPow(superPow(a, (b-1)/2) * superPow(a, (b-1)/2), 1);
    }
}
