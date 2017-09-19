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
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int m = houses.size(), n = heaters.size(), j = 0, res = 0;
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        for (int i = 0; i < m; ++i) {
            int pos = houses[i];
            while (j < n - 1 && abs(heaters[j + 1] - pos) <= abs(heaters[j] - pos)) {
                ++j;
            }
            res = max(res, abs(heaters[j] - pos));
        }
        return res;
    }
};