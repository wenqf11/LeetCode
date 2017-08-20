#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    string st = s.encode("https://leetcode.com/problems/design-tinyurl");
    cout << s.decode(st) << endl;
    return 0;
}