#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    cout << s.findTilt(root) << endl;
}