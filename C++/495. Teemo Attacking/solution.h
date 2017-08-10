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
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        int prev = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (timeSeries[i] >= prev) {
                ans += duration;
            } else {
                ans += timeSeries[i] + duration - prev;
            }
            prev = timeSeries[i] + duration;
        }
        return ans;
    }
};