#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <unordered_set>
#include <cmath>
using namespace std;


//Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) {
		this->val = x;
		this->left = NULL;
		this->right = NULL;
	}
};

class Solution {
private:
	int sum = 0;
public:
	void TraverseTree(TreeNode* root, int digits) {
		digits = digits * 10 + root->val;
		if (root->left != NULL) {
			TraverseTree(root->left, digits);
		}

		if (root->right != NULL) {
			TraverseTree(root->right, digits);
		}

		if (root->left == NULL && root->right == NULL) {
			sum += digits;
		}
	}
	int sumNumbers(TreeNode* root) {
		if (root) TraverseTree(root, 0);
		return sum;
	}
};