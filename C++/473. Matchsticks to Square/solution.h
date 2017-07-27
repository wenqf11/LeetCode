#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <functional>
using namespace std;

class Solution {
public:
    bool searchMatchsticks(vector<int>& nums, vector<bool>& isSelected, int k, int length) {
        if (length == 0) return true;
        if (length < 0) return false;
        for (int i = k; i < nums.size(); i++) {
            if (!isSelected[i]) {
                isSelected[i] = true;
                if (searchMatchsticks(nums, isSelected, i + 1, length - nums[i])) {
                    return true;
                }
                isSelected[i] = false;
            }
        }
        return false;
    }

    bool makesquare(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) sum += nums[i];
        if (sum <= 0 || sum % 4 != 0) return false;
        for (int i = 0; i < n; ++i) {
            if (nums[i] > sum / 4) return false;
        }

        sort(nums.begin(), nums.end(), greater<int>());

        vector<bool> isSelected(n, false);
        for (int i = 0; i < 4; ++i) {
            if (!searchMatchsticks(nums, isSelected, 0, sum / 4)) return false;
        }
        return true;
    }
};