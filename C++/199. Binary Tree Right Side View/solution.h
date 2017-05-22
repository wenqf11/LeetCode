#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <sstream>
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
	vector<int> view;
public:
	void traverse(TreeNode* root, int depth) {
		if (root == NULL) return;

		if (view.size() == depth) view.push_back(root->val);

		traverse(root->right, depth + 1);
		traverse(root->left, depth + 1);
	}
	vector<int> rightSideView(TreeNode* root) {
		traverse(root, 0);
		return view;
	}
};