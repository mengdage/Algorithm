//
//  AllSubstring.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/4/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "AllSubstring.hpp"

void AllSubstring(std::string s, std::vector<std::string> &result){
    for(unsigned int i = 1; i < (1<<s.length()); ++i){
        std::string oneSet = "";
        unsigned int x = i;
//        unsigned int idx = 0;
        while(x){
//            if(x&(1<<idx)){
//                oneSet.push_back(s[idx]);
//                x= x & ~(1<<idx);
//            }
//            ++idx;
            
            oneSet.push_back(s[log2( x & ~(x-1))]);
            x = x & (x-1);
        }
        result.push_back(oneSet);
        
    }
}
