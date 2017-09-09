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
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<float> lines;

        lines.push_back(dist(p1, p2));
        lines.push_back(dist(p1, p3));
        lines.push_back(dist(p1, p4));
        lines.push_back(dist(p2, p3));
        lines.push_back(dist(p2, p4));
        lines.push_back(dist(p3, p4));

        float longest = 0, shortest = lines[0];
        for (int i = 0; i < lines.size(); ++i) {
            longest = max(longest, lines[i]);
            shortest = min(shortest, lines[i]);
        }
        int m = 0, n = 0;
        if (shortest == 0 || abs(longest / shortest - 1.414213) > 0.001) return false;
        for (int i = 0; i < lines.size(); ++i) {
            if (lines[i] == shortest) {
                ++m;
            } else if (lines[i] == longest) {
                ++n;
            }
        }
        return m == 4 && n == 2;
    }
    float dist(vector<int>& x, vector<int>& y) {
        return sqrt((x[0] - y[0]) * (x[0] - y[0]) + (x[1] - y[1]) * (x[1] - y[1]));
    }
};