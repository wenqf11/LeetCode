#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	
	vector<int> postorder = {4, 5, 2, 6, 7, 3, 1};
	vector<int> inorder = {4, 2, 5, 1, 6, 3, 7};
	
	TreeNode* root = s.buildTree(inorder, postorder);
	
	s.preorderTravel(root);
	cout << endl;
	s.inorderTravel(root);
	cout << endl;

	return 0;
}