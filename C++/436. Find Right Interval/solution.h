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

// Definition for an interval.
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    vector<int> findRightInterval(vector<Interval>& intervals) {
        vector<int> res, v;
        unordered_map<int, int> m;
        for (int i = 0; i < intervals.size(); ++i) {
            v.push_back(intervals[i].start);
            m[intervals[i].start] = i;
        }
        sort(v.begin(), v.end(), greater<int>());
        for (auto a : intervals) {
            int i = 0;
            for (; i < v.size(); ++i) {
                if (v[i] < a.end) break;
            }
            res.push_back((i > 0) ? m[v[i - 1]] : -1);
        }
        return res;
    }
};