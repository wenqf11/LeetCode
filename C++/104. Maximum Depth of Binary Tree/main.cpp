#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	TreeNode *root = new TreeNode(3);
	root->left = new TreeNode(9);
	root->right = new TreeNode(20);
	root->left->left = NULL;
	root->left->right = NULL;
	root->right->left = new TreeNode(15);
	root->right->right = new TreeNode(7);
	//root->left->left->left = NULL;
	//root->left->left->right = NULL;
	//root->left->right->left = NULL;
	//root->left->right->right = NULL;
	root->right->left->left = NULL;
	root->right->left->right = NULL;
	root->right->right->left = NULL;
	root->right->right->right = NULL;
	cout << s.maxDepth(root) << endl;

	/*for(int i = 0; i < res.size(); i++) {
		for(int j = 0; j < res[i].size(); j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}*/
	return 0;
}