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
    int findMinArrowShots(vector< pair<int, int> > & points) {
        if (points.size() < 1) return 0;
        sort(points.begin(), points.end());
        int end = points[0].second, res = 1;
        for (int i = 1; i < points.size(); ++i) {
            if (end < points[i].first) {
                res++;
                end = points[i].second;
            } else if (end > points[i].second) {
                end = points[i].second;
            }
        }
        return res;
    }
};