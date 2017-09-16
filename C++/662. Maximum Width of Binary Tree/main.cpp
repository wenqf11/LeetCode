#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(6);

    cout << s.widthOfBinaryTree(root) << endl;
    return 0;
}