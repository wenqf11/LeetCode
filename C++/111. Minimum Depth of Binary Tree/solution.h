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
	int getMinDepth(TreeNode* root) {
    	int leftDepth = INT_MAX, rightDepth = INT_MAX;
        if(root->left == NULL && root->right == NULL) return 1;

		if (root->left != NULL) {
            leftDepth = getMinDepth(root->left);
        }
        if (root->right != NULL) {
            rightDepth = getMinDepth(root->right);
    	}
        
        return min(leftDepth, rightDepth)+1;
	}

    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        return getMinDepth(root);
    }
};