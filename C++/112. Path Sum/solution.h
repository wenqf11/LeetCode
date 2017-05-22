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
    bool isPathSum(TreeNode* root, int sum) {
        bool flag = false;
        if (root->left == NULL && root->right == NULL) {
            if(root->val == sum) {
                return true;
            }
        }
        if(root->left != NULL) flag = flag | isPathSum(root->left, sum-root->val);
        if(root->right!= NULL) flag = flag | isPathSum(root->right, sum-root->val);
        return flag;
    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL) {
            return false;
        }

        return isPathSum(root, sum);
    }
};