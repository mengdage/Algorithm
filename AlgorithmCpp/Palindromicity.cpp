//
//  Palindromicity.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/6/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "Palindromicity.hpp"

bool Palindromicity(const std::string &s){
    int left = 0, right = s.size()-1;
    
    while(left < right){
        while(!isalnum(s[left])){
            ++left;
        }
        while(!isalnum(s[right])){
            --right;
        }
        
        if(tolower(s[left]) != tolower(s[right])){
            return false;
        }
        ++left;
        --right;
        
    }
    return true;
}
