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
    int minMoves(vector<int>& nums) {
        int mn = INT_MAX, res = 0;
        for (int num : nums) mn = min(mn, num);
        for (int num : nums) res += num - mn;
        return res;
    }
};