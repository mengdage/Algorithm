//
//  AllMnemonics.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/6/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "AllMnemonics.hpp"

void AllMnemonicsHelper(std::string &phoneNumber, int index, std::string &oneSet, std::vector<std::string> &mnemonics);

std::vector<std::string> AllMnemonics(std::string &phoneNumber){
    std::vector<std::string> mnemonics;
    std::string oneSet = "";
    AllMnemonicsHelper(phoneNumber, 0, oneSet, mnemonics);
    return mnemonics;
}
std::array<std::string, 10> keyPad = {"0", "1", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void AllMnemonicsHelper(std::string &phoneNumber, int index, std::string &oneSet, std::vector<std::string> &mnemonics){
    if(index == phoneNumber.size()){
        // all number converted
        mnemonics.push_back(oneSet);
        return;
    }
    
    for(auto &c : keyPad[phoneNumber.at(index)-'0']){
        oneSet.push_back(c);
        AllMnemonicsHelper(phoneNumber, index+1, oneSet, mnemonics);
        oneSet.pop_back();
    }
}
