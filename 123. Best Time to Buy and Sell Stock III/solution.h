#pragma once
#include <vector>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) return 0;
        
        vector<int> leftProfit(prices.size(), 0), rightProfit(prices.size(), 0);
        int maxP=0, maxPrice = prices[prices.size()-1], minPrice, res = 0;
        for (int i = prices.size()-1; i >= 0; i--) {
            maxPrice = max(maxPrice, prices[i]);
            maxP = max(maxP, maxPrice-prices[i]);
            rightProfit[i] = maxP;
        }
        
        maxP = 0;
        minPrice = prices[0];
        for (int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            maxP = max(maxP, prices[i]-minPrice);
            leftProfit[i] = maxP;
        }
/*       
        for(int i = 0; i < prices.size(); i++){
            cout << leftProfit[i] << " ";
        }
        cout << endl;

        for(int i = 0; i < prices.size(); i++){
            cout << rightProfit[i] << " ";
        }
        cout << endl;
*/


        for (int i = 0; i < prices.size(); i++) {
            int total = leftProfit[i] + rightProfit[i];
            if (total > res) {
                res = total;
            }
        }
        return res;
    }
};
