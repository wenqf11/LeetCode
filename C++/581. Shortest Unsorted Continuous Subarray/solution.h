#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n < 1) return 0;
        int start = 0, end = -1, minN = nums[n - 1], maxN = nums[0];

        for (int i = 0; i < n; ++i) {
            maxN = max(nums[i], maxN);
            minN = min(nums[n - 1 - i], minN);
            if (nums[i] < maxN) end = i;
            if (nums[n - 1 - i] > minN) start = n - 1 - i;
        }
        return end - start + 1;
    }
};