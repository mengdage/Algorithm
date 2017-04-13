//
//  Parenthesis.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/13/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "Parenthesis.hpp"

void parenHelper(int L, int R, std::string &oneCase, std::vector<std::string> &results);
void paren(int n){
    std::string oneCase = "";
    std::vector<std::string> results;
    parenHelper(n, 0, oneCase, results);
    
    for(auto s : results){
        std::cout << s << std::endl;
    }
}

void parenHelper(int L, int R, std::string &oneCase, std::vector<std::string> &results){
    if(L+R == 0) results.push_back(oneCase);
    
    //add L
    if(L>0){
        --L; ++R;
        oneCase.push_back('(');
        parenHelper(L, R, oneCase, results);
        ++L; --R;
        oneCase.pop_back();
    }
    
    //add R
    if(R>0){
        --R;
        oneCase.push_back(')');
        parenHelper(L, R, oneCase, results);
        ++R;
        oneCase.pop_back();
    }
}

void testParen(){
    paren(3);
    
}
