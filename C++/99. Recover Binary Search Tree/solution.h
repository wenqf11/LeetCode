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
	TreeNode *prev = NULL, *first = NULL, *second = NULL;
public:
	void recoverTree(TreeNode* root) {

		inorder(root);
		if (first != NULL && second != NULL) {
			int tmp = first->val;
			first->val = second->val;
			second->val = tmp;
		}
	}

	void inorder(TreeNode* root) {
		if (root->left != NULL) inorder(root->left);
		if (prev != NULL && root->val < prev->val) {
			if (first == NULL) {
				first = prev;
			}
			if (first != NULL) {
				second = root;
			}
		}
		prev = root;
		if (root->right != NULL) inorder(root->right);
	}
};