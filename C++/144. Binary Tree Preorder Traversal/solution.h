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
	void preTraversal(TreeNode* root) {
		if (root == NULL) return;
		res.push_back(root->val);
		preTraversal(root->left);
		preTraversal(root->right);
	}
	vector<int> preorderTraversal(TreeNode* root) {
		preTraversal(root);
		return res;
	}
};