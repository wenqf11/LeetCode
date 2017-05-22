#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(2);
	root->left->left = new TreeNode(3);
	root->left->right = NULL;
	root->right->left = new TreeNode(3);
	root->right->right = NULL;
	root->left->left->left = NULL;
	root->left->left->right = NULL;
	//root->left->right->left = NULL;
	//root->left->right->right = NULL;
	root->right->left->left = NULL;
	root->right->left->right = NULL;
	//root->right->right->left = NULL;
	//root->right->right->right = NULL;
	cout << s.isSymmetric(root)<< endl;
	return 0;
}