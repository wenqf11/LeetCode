#include <iostream>
#include "solution.h"

int main() {
    Solution s;

    vector<int> res = s.findAnagrams("cbaebabacd", "abc");
    for ( auto r : res) {
        cout << r << " ";
    }
    cout << endl;
}