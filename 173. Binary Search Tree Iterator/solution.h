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



// Definition for binary tree
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BSTIterator {
private:
	vector<int>	valList;
	int index;

	void inorderTraverse(TreeNode* root) {
		if (root == NULL) return ;
		inorderTraverse(root->left);
		valList.push_back(root->val);
		inorderTraverse(root->right);
	}
public:
	BSTIterator(TreeNode *root) {
		inorderTraverse(root);
		index = -1;
	}

	/** @return whether we have a next smallest number */
	bool hasNext() {
		index ++;
		return index < valList.size();
	}

	/** @return the next smallest number */
	int next() {
		return valList[index];
	}

};