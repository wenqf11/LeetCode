#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> stones;
    stones.push_back(0);
    stones.push_back(1);
    stones.push_back(3);
    stones.push_back(5);
    stones.push_back(9);
    cout << s.canCross(stones) << endl;
}