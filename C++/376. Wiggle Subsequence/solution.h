#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;


class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int p = 1, q = 1;
        int n = nums.size();
        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[i - 1]) {
                p = q + 1;
            } else if (nums[i] < nums[i - 1]) {
                q = p + 1;
            }
        }
        return min(n, max(p, q));
    }
};