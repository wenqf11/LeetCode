#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0, n = nums.size();
        for (int i = 0; i < n; ++i) sum += nums[i];
        if (sum % 2 == 1) return false;
        int target = sum / 2;
        vector<bool> f(target, 0);
        f[0] = true;
        for (int i = 0; i < n; ++i)
            for (int j = target; j >= nums[i]; --j) {
                f[j] = f[j] | f[j - nums[i]];
            }
        return f[target];
    }
};