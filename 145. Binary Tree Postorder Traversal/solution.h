#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <map>
#include <algorithm>
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
	vector<int> res;
public:
	void prostTraversal(TreeNode* root) {
		if (root == NULL) return;
		prostTraversal(root->left);
		prostTraversal(root->right);
		res.push_back(root->val);
	}
	vector<int> postorderTraversal(TreeNode* root) {
		prostTraversal(root);
		return res;
	}
};