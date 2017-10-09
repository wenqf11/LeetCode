#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    TreeNode* a = new TreeNode(0);
    TreeNode* b = new TreeNode(0);
    cout << s.isSubtree(a, b) << endl;
}