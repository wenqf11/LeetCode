#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include <set>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<Interval>& intervals) {
        int ans = 0, n = intervals.size();
        int last = 0;
        sort(intervals.begin(), intervals.end(), [](Interval & a, Interval & b) {return a.start < b.start;});
        for (int i = 1; i < n; ++i) {
            if (intervals[i].start < intervals[last].end) {
                ++ans;
                if (intervals[i].end < intervals[last].end) last = i;
            } else {
                last = i;
            }
        }
        return ans;
    }
};