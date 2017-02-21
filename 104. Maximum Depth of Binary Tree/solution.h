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
    int depthMax = 0;
public:
    void travel(TreeNode* root, int level) {
        if(root == NULL) return;
        if(level > depthMax) {
            depthMax = level;
        }
        
        travel(root->left, level+1);
        travel(root->right, level+1);
    }
    
    int maxDepth(TreeNode* root) {
        travel(root, 1);
        
        return depthMax;
    }
};