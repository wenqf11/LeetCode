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
    int totalHammingDistance(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        for (int i = 0; i < 32; ++i) {
            int ones = 0, zeros = 0;
            for (int j = 0; j < n; ++j) {
                ((1 << i)&nums[j]) == 0 ? zeros++ : ones++;
            }
            res += ones * zeros;
        }
        return res;
    }
};