#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <set>
using namespace std;

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> f(target + 1, 0);
        f[0] = 1;
        for (int j = 0; j <= target; ++j) {
            for (int i = 0; i < nums.size(); ++i) {
                if (j - nums[i] >= 0)f[j] += f[j - nums[i]];
            }
        }
        return f[target];
    }
};