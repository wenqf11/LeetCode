#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->right->left = new TreeNode(4);
	vector<int> ans = s.rightSideView(root);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] <<  " ";
	cout << endl;
	return 0;
}
