#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> candies;
    candies.push_back(2);
    candies.push_back(6);
    candies.push_back(2);
    candies.push_back(3);
    candies.push_back(10);
    candies.push_back(9);
    candies.push_back(15);
    cout << s.findLHS(candies) << endl;
}