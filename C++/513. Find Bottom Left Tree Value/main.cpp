#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    TreeNode* root = new TreeNode(1);
    cout << s.findBottomLeftValue(root) << endl;
    return 0;
}