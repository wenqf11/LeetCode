#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res(2);
        int temp = 0;
        for (int i = 0; i < nums.size(); i++) {
            temp ^= nums[i];
        }
        temp &= -temp;

        for (int i = 0; i < nums.size(); i++) {
            if (temp & nums[i]) {
                res[0] ^= nums[i];
            } else {
                res[1] ^= nums[i];
            }
        }
        return res;
    }
};