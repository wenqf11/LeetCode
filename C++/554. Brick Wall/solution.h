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
    int leastBricks(vector< vector<int> >& wall) {
        unordered_map<int, int> m;
        int ans = 0, sum = 0;
        for (int i = 0; i < wall.size(); ++i) {
            sum = 0;
            for (int j = 0; j < wall[i].size() - 1; ++j) {
                sum += wall[i][j];
                ++m[sum];
                ans = max(ans, m[sum]);
            }
        }
        return wall.size() - ans;
    }
};