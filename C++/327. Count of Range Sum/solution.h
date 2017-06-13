#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;


class Solution {
public:
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        multiset<long> sums;
        long sum = 0;
        sums.insert(0);
        int res = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            res += distance(sums.lower_bound(sum - upper), sums.upper_bound(sum - lower));
            sums.insert(sum);
        }
        return res;
    }
};