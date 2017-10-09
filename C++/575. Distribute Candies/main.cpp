#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> candies;
    candies.push_back(1);
    candies.push_back(2);
    candies.push_back(3);
    candies.push_back(1);
    candies.push_back(2);
    candies.push_back(3);
    cout << s.distributeCandies(candies) << endl;
}