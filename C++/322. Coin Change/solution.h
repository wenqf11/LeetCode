#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;


class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> f(amount + 1, amount + 1);
        f[0] = 0;
        for (int i = 1; i <= amount; ++i) {
            for (int j = 0; j < n; ++j) {
                if (coins[j] <= i) f[i] = min(f[i], f[i - coins[j]] + 1);
            }
        }

        return f[amount] > amount ? -1 : f[amount];
    }
};