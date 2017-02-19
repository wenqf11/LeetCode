#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	TreeNode *head = new TreeNode(2);
	head->left = new TreeNode(1);
	head->right = new TreeNode(3);
	head->left->left = NULL;
	head->left->right = NULL;
	head->right->left = NULL;
	head->right->right = NULL;
	s.recoverTree(head);
	system("pause");
	return 0;
}