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
    int ans;
    int findTargetSumWays(vector<int>& nums, int S) {
        vector<int> sum(nums.size(), 0);
        ans = 0;
        if (nums.size() == 0) {
            if (S == 0) return 1;
            else return 0;
        }
        sum[nums.size() - 1] = nums.back();
        for (int i = nums.size() - 2; i >= 0; i--) {
            sum[i] = sum[i + 1] + nums[i];
        }
        enumerate_symbol(nums, S, sum, 0);
        return ans;
    }

    void enumerate_symbol(vector<int>& nums, int S, vector<int>& sum, int k) {
        if (k == nums.size()) {
            if (S == 0) ans ++;
            return;
        }
        if (S - sum[k] > 0) return;
        if (S + sum[k] < 0) return;
        enumerate_symbol(nums, S - nums[k], sum, k + 1);
        enumerate_symbol(nums, S + nums[k], sum, k + 1);
    }
};