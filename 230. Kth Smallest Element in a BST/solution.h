#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int kthSmallest(TreeNode* root, int k) {
		return kthSmallestDFS(root, k);
	}

	int kthSmallestDFS(TreeNode* root, int &k) {
		if (!root) return -1;
		int val = kthSmallestDFS(root->left, k);
		if (k == 0) return val;
		if (--k == 0) return root->val;
		return kthSmallestDFS(root->right, k);
	}
};