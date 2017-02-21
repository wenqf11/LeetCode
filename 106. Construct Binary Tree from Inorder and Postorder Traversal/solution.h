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
    void build(TreeNode* root, vector<int>& postorder, vector<int>& inorder, int l, int r) {
        root->val = postorder[ind];
        ind --;    
        
        int pos = 0;
        for(pos = l; pos <= r; pos++) {
            if (inorder[pos] == root->val) break;
        }

        

        if(pos+1 <= r) {
            root->right = new TreeNode(0);
            build(root->right, postorder, inorder, pos+1, r);
        } else {
            root->right = NULL;
        }
        
        if(l <= pos-1) {
            root->left = new TreeNode(0);
            build(root->left, postorder, inorder, l, pos-1);    
        } else {
            root->left = NULL;
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

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (postorder.size() < 1) return NULL;
        ind = postorder.size() - 1;
        TreeNode* root = new TreeNode(0);
        build(root, postorder, inorder, 0, inorder.size()-1);
        return root;
    }
};