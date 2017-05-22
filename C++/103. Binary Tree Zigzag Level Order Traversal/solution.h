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
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        travel(root, 0);
        
        int tmp;
        for(int i = 0; i < res.size(); i++) {
            if(i % 2 == 0) continue;
            for(int j = 0; j <= (res[i].size()-1)/2; j++){
                tmp = res[i][j];
                res[i][j] = res[i][res[i].size()-1-j];
                res[i][res[i].size()-1-j] = tmp;
            }
        }
        return res;
    }
};