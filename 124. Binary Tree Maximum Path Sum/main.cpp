#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;

	TreeNode* root = new TreeNode(-3);
    
	cout << s.maxPathSum(root) << endl;
	return 0;
}
