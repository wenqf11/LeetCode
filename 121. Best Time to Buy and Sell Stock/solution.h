#pragma once
#include <vector>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        int maxPrice = prices[prices.size()-1], maxP = 0;
        for(int i = prices.size()-1; i >= 0; i--) {
            maxPrice = max(maxPrice, prices[i]);
            maxP = max(maxP, maxPrice-prices[i]);
        }
        return maxP;
    }
};