#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	
	vector<int> preorder = {1, 2, 4, 5, 3, 6, 7};
	vector<int> inorder = {4, 2, 5, 1, 6, 3, 7};
	
	TreeNode* root = s.buildTree(preorder, inorder);
	
	s.preorderTravel(root);
	cout << endl;
	s.inorderTravel(root);
	cout << endl;

	return 0;
}