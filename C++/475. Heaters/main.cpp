#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> houses, heaters;
    houses.push_back(1);
    houses.push_back(2);
    houses.push_back(3);
    houses.push_back(4);

    heaters.push_back(1);
    heaters.push_back(4);
    cout << s.findRadius(houses, heaters) << endl;
    return 0;
}