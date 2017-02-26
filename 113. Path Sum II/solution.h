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
private:
    vector<vector<int>> ans;
public:
    void getPathSum(TreeNode* root, int sum, vector<int> path) {
        path.push_back(root->val);
        if (root->left == NULL && root->right == NULL) {
            if(root->val == sum) {
                ans.push_back(path);
                return;
            }
        }
        if(root->left != NULL) getPathSum(root->left, sum-root->val, path);
        if(root->right!= NULL) getPathSum(root->right, sum-root->val, path);

    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(root == NULL) {
            return ans;
        }

        getPathSum(root, sum, {});
        return ans;
    }
};