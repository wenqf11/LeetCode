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
	int countNodes(TreeNode* root) {
		int hLeft = 0, hRight = 0;
		TreeNode *pLeft = root, *pRight = root;

		while (pLeft) {
			++hLeft;
			pLeft = pLeft->left;
		}
		while (pRight) {
			++hRight;
			pRight = pRight->right;
		}

		if (hLeft == hRight) return pow(2, hLeft) - 1;

		return countNodes(root->left) + countNodes(root->right) + 1;
	}
};