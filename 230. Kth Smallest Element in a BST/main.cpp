#include <iostream>
#include "solution.h"

int main() {
	Solution s;
	TreeNode* root = new TreeNode(0);
	cout << s.kthSmallest(root, 1);
	return 0;
}
