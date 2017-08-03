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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k = 0, ans = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                k ++;
                ans = max(ans, k);
            } else {
                k = 0;
            }
        }
        return ans;
    }
};