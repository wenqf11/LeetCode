#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	TreeNode* root = new TreeNode(0);
	root->left = NULL;
	root->right = NULL;
	cout << s.isBalanced(root);
	return 0;
}