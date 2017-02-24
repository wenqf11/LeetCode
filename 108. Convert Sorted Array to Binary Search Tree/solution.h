#pragma once
#include<vector>
#include<string>
#include<climits>
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
	void sortedArray2BST(vector<int>& nums, int l, int r, TreeNode*& root) {
		if (r < l) {
			root = NULL;
			return;
		}

		int mid = (l+r)/2;
		root = new TreeNode(0);
    	root->val = nums[mid];
        sortedArray2BST(nums, l, mid-1, root->left);
        sortedArray2BST(nums, mid+1, r, root->right);
	}

    TreeNode* sortedArrayToBST(vector<int>& nums) {
    	TreeNode* root = NULL;
        sortedArray2BST(nums, 0, nums.size()-1, root);
        return root;
    }
};