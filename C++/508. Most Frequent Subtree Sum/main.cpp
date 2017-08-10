#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(2);
    root->right = new TreeNode(-3);
    vector<int> ans = s.findFrequentTreeSum(root);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
}