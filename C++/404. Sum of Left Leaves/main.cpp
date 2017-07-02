#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    TreeNode *root = new TreeNode(0);
    root->left = new TreeNode(2);
    cout << s.sumOfLeftLeaves(root) << endl;

    delete root->left;
    delete root;
}