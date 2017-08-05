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
    vector<int> constructRectangle(int area) {
        int m = sqrt(area);
        vector<int> ans;
        for (int i = m; i >= 1; --i) {
            if (area % i == 0) {
                ans.push_back(area / i);
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};