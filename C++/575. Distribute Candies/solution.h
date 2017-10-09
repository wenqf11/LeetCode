#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort(candies.begin(), candies.end());
        int prev = candies[0];
        int ans = 1;
        for (int i = 0; i < candies.size(); ++i) {
            if (candies[i] != prev) {
                prev = candies[i];
                ++ans;
            }
        }
        int m = candies.size() / 2;
        return min(ans, m);
    }
};