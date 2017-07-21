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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        int t = 0;
        for (int i = 0; i < n; ++i) {
            t = abs(nums[i]) - 1;
            if (nums[t] > 0) {
                nums[t] = -nums[t];
            }
        }

        vector<int> res;
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0) res.push_back(i + 1);
        }
        return res;
    }
};