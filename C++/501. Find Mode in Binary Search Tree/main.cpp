#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    TreeNode* root = new TreeNode(2147483647);
    vector<int> ans = s.findMode(root);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
}