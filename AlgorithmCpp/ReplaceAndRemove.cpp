//
//  ReplaceAndRemove.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/6/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "ReplaceAndRemove.hpp"

void ReplaceAndRemove(std::string &s){
    int writeIdx = 0, aNum = 0;
    for(const auto &c : s){
        if(c != 'b'){
            s[writeIdx++] = c;
        }
        if(c == 'a'){
            ++aNum;
        }
    }
    
    s.resize(writeIdx+aNum);
    //"acan"
    auto j = s.size()-1;
    for(int i = writeIdx-1; i >= 0; --i){
        
        if(s[i] == 'a'){
            s[j--] = 'b';
            s[j--] = 'b';
            
        }
        else {
            s[j--] = s[i];
        }
    }
    
}

void MergeTwoSortedVector(std::vector<int> &v1, std::vector<int> &v2){
    auto len1 = v1.size();
    auto len2 = v2.size();
    v1.resize(len1+len2);
    
    auto writeIdx = len1 + len2-1;
    int p1 = (int)len1-1, p2 = (int)len2-1;
    while(p1 >= 0 && p2 >= 0){
        if(v1[p1] >= v2[p2]){
            v1[writeIdx--] = v1[p1--];
        } else {
            v1[writeIdx--] = v2[p2--];
        }
    }
    if(p1 == 0){
        while(p2>=0){
            v1[writeIdx--] = v2[p2--];
        }
    }
}
