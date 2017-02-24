#pragma once
#include<vector>
#include<string>
#include<climits>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



class Solution {
public:
	vector<int> listNode2Array(ListNode* head) {
		vector<int> nums;
		while(head != NULL){
			nums.push_back(head->val);
			head = head->next;
		}
		return nums;
	}
	
    TreeNode* sortedListToBST(ListNode* head) {
        TreeNode* root = NULL;

        vector<int> nums = listNode2Array(head);
        sortedArray2BST(nums, 0, nums.size()-1, root);
        return root;
    }

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
};