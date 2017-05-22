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
private:
    int ind = 0;

public:
    void build(TreeNode* root, vector<int>& preorder, vector<int>& inorder, int l, int r) {
        root->val = preorder[ind];
        ind ++;    
        
        int pos = 0;
        for(pos = l; pos <= r; pos++) {
            if (inorder[pos] == root->val) break;
        }

        if(l <= pos-1) {
            root->left = new TreeNode(0);
            build(root->left, preorder, inorder, l, pos-1);    
        } else {
            root->left = NULL;
        }

        if(pos+1 <= r) {
            root->right = new TreeNode(0);
            build(root->right, preorder, inorder, pos+1, r);
        } else {
            root->right = NULL;
        }

    }
    
    void preorderTravel(TreeNode* root) {
        if(root == NULL) return;

        cout << root->val << " ";
        preorderTravel(root->left);
        preorderTravel(root->right);
    }

    void inorderTravel(TreeNode* root) {
        if(root == NULL) return;

        inorderTravel(root->left);
        cout << root->val << " ";
        inorderTravel(root->right);
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.size() < 1) return NULL;
        TreeNode* root = new TreeNode(0);
        build(root, preorder, inorder, 0, inorder.size()-1);
        return root;
    }
};