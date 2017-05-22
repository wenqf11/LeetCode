#include <iostream>
#include "solution.h"

int main() {
	Solution s;
	TreeNode *root = new TreeNode(0);
	root->left = new TreeNode(1);
	root->right = new TreeNode(2);
	s.lowestCommonAncestor(root, root->left, root->right);
	return 0;
}
