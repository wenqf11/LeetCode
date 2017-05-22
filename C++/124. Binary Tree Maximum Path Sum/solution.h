#pragma once
#include <vector>
#include <string>
#include <climits>
#include <cmath>
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
    int ans = 0;
public:
    int getMaxPath(TreeNode* root) {
        int leftSum=0, rightSum=0;
        if(root->left != NULL) leftSum = max(getMaxPath(root->left), 0);
        if(root->right != NULL) rightSum = max(getMaxPath(root->right), 0);
        if(leftSum+rightSum+root->val > ans) {
            ans = leftSum+rightSum+root->val;
        }
    
        return max(leftSum, rightSum)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        if(root == NULL) return 0;
        int leftSum=0, rightSum=0;
        
        ans = root->val;
        if(root->left != NULL) leftSum = max(getMaxPath(root->left), 0);
        if(root->right != NULL) rightSum = max(getMaxPath(root->right), 0);
        if(leftSum+rightSum+root->val > ans) {
            ans = leftSum+rightSum+root->val;
        }
        return ans;
    }
};