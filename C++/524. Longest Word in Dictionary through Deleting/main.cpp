#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<string> d;
    d.push_back("ale");
    d.push_back("apple");
    d.push_back("monkey");
    cout << s.findLongestWord("abpcplea", d) << endl;
    return 0;
}