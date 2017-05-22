#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	TreeLinkNode* root = new TreeLinkNode(5);

	root->left = NULL;
	root->right = NULL;
	s.connect(root);

	return 0;
}