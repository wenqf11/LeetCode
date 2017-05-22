#pragma once
#include<vector>
#include<string>
#include<cstring>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack> 
#include <numeric>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;



// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
	TreeNode* lastNode=NULL;
public:
	bool isValidBST(TreeNode* root) {
		if (root == NULL) return true;
		bool result = true;
		if (!isValidBST(root->left)) {
			return false;
		}
		if (lastNode != NULL && lastNode->val >= root->val) {
			return false;
		}
		lastNode = root;
		return isValidBST(root->right);
	}
};