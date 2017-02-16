#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	TreeNode * head = new TreeNode(1);
	head->left = NULL;
	head->right = new TreeNode(2);
	head->right->left = new TreeNode(3);
	head->right->right = NULL;
	head->right->left->left = NULL;
	head->right->left->right = NULL;
	vector<int> res = s.inorderTraversal(head);
	system("pause");
	return 0;
}