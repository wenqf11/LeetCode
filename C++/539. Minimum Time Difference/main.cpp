#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<string> timePoints;
    timePoints.push_back("23:59");
    timePoints.push_back("00:00");
    cout << s.findMinDifference(timePoints) << endl;
    return 0;
}