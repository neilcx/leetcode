//
//  lc453.cpp
//  
//
//  Created by neil on 1/31/18.
//
//

#include <stdio.h>
#include <iostream>
#inlcude <vector>

using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mi =nums[0];
        int res=0;
        for(int n:nums)
            mi=min(mi,n);
        for(int n:nums)
            res+=(n-mi);
        return res;
        
    }
};


