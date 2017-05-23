#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), tmp = 0;
        for (int i = 0; i < n;) {
            if (nums[i] == 0) {
                for (int j = i + 1; j < n; ++j) {
                    tmp = nums[j];
                    nums[j] = nums[j - 1];
                    nums[j - 1] = tmp;
                }
                --n;
            } else {
                ++i;
            }
        }
    }
};