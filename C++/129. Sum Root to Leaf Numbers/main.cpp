#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->right->left = new TreeNode(3);
	root->right->right = new TreeNode(3);

	cout << s.sumNumbers(root) << endl;
	return 0;
}
