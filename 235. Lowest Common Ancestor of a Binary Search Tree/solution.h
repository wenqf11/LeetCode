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

// Definition for singly-linked list.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if ((p->val - root->val) * (q->val - root->val) <= 0) return root;
		else if (p->val < root->val) {
			return lowestCommonAncestor(root->left, p, q);

		} else if (p->val > root->val) {
			return lowestCommonAncestor(root->right, p, q);
		}
	}
};