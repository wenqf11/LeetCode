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
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int sum0 = 0, sum1 = 0;
        vector<int> f(n, 0);
        unordered_map<int, int> ind;
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 0) sum0++;
            else sum1++;
            f[i] = sum0 - sum1;
        }
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (f[i] == 0) {
                ans = max(ans, i + 1);
            } else if (ind.find(f[i]) == ind.end()) {
                ind[f[i]] = i;
            } else {
                ans = max(ans, i - ind[f[i]]);
            }
        }
        return ans;
    }
};