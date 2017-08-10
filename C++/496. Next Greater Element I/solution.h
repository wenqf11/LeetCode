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
    int getIndex(vector<int>& nums, int val) {
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] == val) return i;
        return 0;
    }
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        int m = findNums.size();
        int n = nums.size();
        vector<int> next(m, 0);
        for (int i = 0; i < m; ++i) {
            int k = getIndex(nums, findNums[i]);
            next[i] = -1;
            for (int j = k + 1; j < n; ++j) {
                if (nums[j] > findNums[i]) {
                    next[i] = nums[j];
                    break;
                }
            }
        }
        return next;
    }
};