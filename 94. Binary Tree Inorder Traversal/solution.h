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



//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		if (root == NULL) return {};
		vector<int> right, node;
		if (root->left != NULL) node = inorderTraversal(root->left);
		node.push_back(root->val);
		if (root->right != NULL) right =  inorderTraversal(root->right);
		for (int i = 0; i < right.size(); i++) {
			node.push_back(right[i]);
		}
		return node;
	}
};