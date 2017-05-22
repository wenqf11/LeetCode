#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = NULL;
	root->left->right = NULL;
	root->right->left = NULL;
	root->right->right = NULL;
	vector<vector<int>> v = s.pathSum(root, 3);
	cout << v.size();
	return 0;
}