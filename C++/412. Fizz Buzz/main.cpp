#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<string> res = s.fizzBuzz(15);
    for (auto r : res) {
        cout << r << endl;
    }
}