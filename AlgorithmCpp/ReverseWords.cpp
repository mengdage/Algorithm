//
//  ReverseWords.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/6/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "ReverseWords.hpp"

void ReverseWords(std::string &sentence){
    std::reverse(sentence.begin(), sentence.end());
    
    auto start = sentence.begin();
    std::string::iterator end;
    while( (end = std::find(start, sentence.end(), ' ')) != sentence.cend()){
        std::reverse(start, end);
        start = end + 1;
    }
    
    std::reverse(start, sentence.end());
}
