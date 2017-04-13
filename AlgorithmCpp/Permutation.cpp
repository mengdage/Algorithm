//
//  Permutation.cpp
//  AlgorithmCpp
//
//  Created by LinMeng on 4/13/17.
//  Copyright © 2017 LinMeng. All rights reserved.
//

#include "Permutation.hpp"

void permKHelper(std::vector<int> &nums, int start, std::vector<std::vector<int>> &results);
void permK(std::vector<int> nums){
    std::vector<std::vector<int>> results;
    permKHelper(nums, 0, results);
    std::cout << "total size: " << results.size() << std::endl;
    for(auto e : results){
        for(auto i : e){
            std::cout << i << " ";
        }
        std::cout << std:: endl;
    }
    
    
}

void permKHelper(std::vector<int> &nums, int start, std::vector<std::vector<int>> &results){
    if(start == nums.size()-1) results.push_back(nums);
    
    for(int i = start; i < nums.size(); ++i){
        int tmp = nums[start];
        nums[start] = nums[i];
        nums[i] = tmp;
        
        permKHelper(nums, start+1, results);
        
        nums[i] = nums[start];
        nums[start] = tmp;
    }
}

void testPermutation(){
    std::vector<int> nums = {1,2,3,4,5};
    
    permK(nums);
}
