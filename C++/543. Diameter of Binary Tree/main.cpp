#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    TreeNode* root = new TreeNode(2);
    cout << s.diameterOfBinaryTree(root) << endl;
    return 0;
}