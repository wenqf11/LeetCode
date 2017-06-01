#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <sstream>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.begin(), 1);
        nums.push_back(1);

        vector< vector<int> > f(nums.size(), vector<int>(nums.size(), 0));

        for (int len = 1; len <= n; ++len)
            for (int i = 1; i <= n - len + 1; ++i) {
                int j = i + len - 1;
                for (int k = i; k <= j; ++k) {
                    f[i][j] = max(f[i][j], f[i][k - 1] + f[k + 1][j] + nums[k] * nums[i - 1] * nums[j + 1]);
                }
            }
        return f[1][n];
    }
};