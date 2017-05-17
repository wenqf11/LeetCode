#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
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
	vector<string> res;
public:
	vector<string> binaryTreePaths(TreeNode* root) {
		if (root) traversal(root, "");
		return res;
	}

	void traversal(TreeNode* root, string s) {
		s += to_string(root->val);
		if (!root->left && !root->right) {
			res.push_back(s);
			return;
		}
		if (root->left) traversal(root->left, s + "->");
		if (root->right) traversal(root->right, s + "->");
	}
};