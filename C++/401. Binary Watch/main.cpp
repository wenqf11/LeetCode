#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<string> res =  s.readBinaryWatch(2);
    for (auto r : res) {
        cout << r << " ";
    }
    cout << endl;
}