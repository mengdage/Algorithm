//
//  CentsCombination.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/13/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "CentsCombination.hpp"

int centsCombinationHelper(int amount, const std::array<int, 3> &coinKinds, int index);
int centsCombination(int amount){
    std::vector<int> oneCase(3,0);
    std::vector<std::vector<int>> results;
    std::array<int, 3> coinKinds = {25, 5, 1};
    return centsCombinationHelper(amount, coinKinds, 0);
}

int centsCombinationHelper(int amount, const std::array<int, 3> &coinKinds, int index){
    if(index >= coinKinds.size()-1) return 1;
    int coinAmount = coinKinds[index];
    int ways = 0;
    for(int i = 0; i * coinAmount < amount; ++i){
        int remainingAmount = amount - i * coinAmount;
        ways += centsCombinationHelper(remainingAmount, coinKinds, index + 1);
    }
    
    return ways;
    
}

void testCents(){
    std::cout << centsCombination(28) << std::endl;
}
