//
//  sqrt.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/11/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "sqrt.hpp"

double mySqrt(int x){
    long r = x;
    while(r*r>x){
        r = (x/r+r)/2;
        std::cout << r << ": " << r*r << std::endl;
        
    }
    return r;
}
