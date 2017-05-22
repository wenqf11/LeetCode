#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	TreeNode* root = new TreeNode(0);
	cout << s.countNodes(root) << endl;
	return 0;
}
