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
    vector<vector<int>> res;

public:
    void travel(TreeNode* root, int level) {
        if(root == NULL) return;
        if(res.size() <= level) {
            res.push_back({});
        }
        res[level].push_back(root->val);
        travel(root->left, level+1);
        travel(root->right, level+1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        travel(root, 0);
        return res;
    }
};