#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size(), mid = n / 2;
        int res = 0;
        nth_element(nums.begin(), nums.begin() + mid, nums.end());
        for (int i = 0; i < n; ++i) {
            res += abs(nums[i] - nums[mid]);
        }
        return res;
    }
};