#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> coins;
    coins.push_back(5);
    coins.push_back(2);
    coins.push_back(1);
    cout << s.coinChange(coins, 15) << endl;
}