#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	TreeNode* root = new TreeNode(2);
	root->left = new TreeNode(1);
	root->right = new TreeNode(3);

	BSTIterator i = BSTIterator(root);
	while (i.hasNext()) cout << i.next();
	return 0;
}
