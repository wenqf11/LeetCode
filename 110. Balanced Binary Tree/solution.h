#pragma once
#include<vector>
#include<string>
#include<climits>
#include<cmath>
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
	int getDepth(TreeNode* root, bool& flag) {
		if(root == NULL) return 0;
		int leftDepth  = getDepth(root->left, flag);
		int rightDepth = getDepth(root->right, flag);
		if(abs(leftDepth-rightDepth)>1) flag = false;
		return max(leftDepth, rightDepth)+1;
	}

    bool isBalanced(TreeNode* root) {
    	bool flag = true;
        getDepth(root, flag);
        return flag;
    }
};