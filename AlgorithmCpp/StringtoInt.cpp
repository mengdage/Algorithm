//
//  StringtoInt.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/6/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "StringtoInt.hpp"

int StringtoInt(std::string snum){
    int result = 0;
    bool negative = false;
    auto itr = snum.cbegin();
    if(*itr == '-'){
        ++itr;
        negative = true;
    }
    
    while(itr != snum.cend()){
        result = result * 10 + (*itr-'0');
        ++itr;
    }
    return negative ? -1 * result : result;
}

std::string InttoString(int num){
    std::string result = "";
    bool negative = false;
    if(num < 0){
        negative = true;
        num *= -1;
    } else if(num == 0) {
        return std::string("0");
    }
    
    while(num){
        char c = num % 10 + '0';
        result.push_back(c);
        num = num / 10;
    }
    if(negative){
        result.push_back('-');
    }
    std::reverse(result.begin(), result.end());
    return result;
    
    
}
