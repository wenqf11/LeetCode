#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector<int> res = s.lexicalOrder(15);
    for (auto r : res) {
        cout << r << " ";
    }
    cout << endl;
}