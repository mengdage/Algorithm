//
//  MedianOfTwoArray.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/9/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "MedianOfTwoArray.hpp"

double MedianOfTwoArray(std::vector<int> &A, std::vector<int> &B){
    //assume A.size() > B.size()
    
    std::vector<int> &shorter = (A.size() <= B.size()) ? A : B;
    std::vector<int> &longer = (A.size() <= B.size()) ? B : A;
    
    // m <= n
    int m =(int)shorter.size();
    int n = (int)longer.size();
    if(m){
        return (n%2==0) ? (B[n/2]+B[n/2+1])/2 : B[n/2+1];
    }
    
    int halfLen = (m+n+1)/2;
    int iMin = 0, iMax = m-1;
    int i = 0, j = 0;
    
    while(std::max(shorter[i-1], longer[j-1]) > std::min(shorter[i], longer[j])){
        if(shorter[i-1] >= longer[j-1]){
            i = i/2;
            j = halfLen -i;
        } else {
            i = (m+i)/2;
            j = halfLen -i;
        }
    }
    return ((m+n)%2 == 0) ? ((double)(std::max(shorter[i-1], longer[j-1]) + std::min(shorter[i], longer[j])))/2.0 : std::max(shorter[i], longer[j]);
}
