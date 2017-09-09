#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> a, b, c, d;
    a.push_back(0);
    a.push_back(0);
    b.push_back(1);
    b.push_back(1);
    c.push_back(1);
    c.push_back(0);
    d.push_back(0);
    d.push_back(1);
    cout << s.validSquare(a, b, c, d) << endl;
    return 0;
}