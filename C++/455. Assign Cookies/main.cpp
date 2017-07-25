#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> g, ss;
    g.push_back(1);
    g.push_back(2);

    ss.push_back(1);
    ss.push_back(2);
    ss.push_back(3);

    cout << s.findContentChildren(g, ss) << endl;
}