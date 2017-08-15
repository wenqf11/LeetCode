#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> machines;
    machines.push_back(1);
    machines.push_back(0);
    machines.push_back(5);
    cout << s.findMinMoves(machines) << endl;
    return 0;
}