#pragma once
#include<vector>
#include<string>
#include<climits>
#include<cmath>
using namespace std;


// Definition for binary tree with next pointer.
 struct TreeLinkNode { 
  int val;
  TreeLinkNode *left, *right, *next;
  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 };

class Solution {
private:
    vector<vector<TreeLinkNode*>> treeNodes;

public:
    void traversal(TreeLinkNode* root, int level) {
        if(root == NULL) return;

        if(level >= treeNodes.size()) {
            treeNodes.push_back({});
        }

        treeNodes[level].push_back(root);
        traversal(root->left, level+1);
        traversal(root->right, level+1);
    }

    void connect(TreeLinkNode *root) {
        traversal(root, 0);
        for(int i = 0; i < treeNodes.size(); i++){
            for(int j = 0; j < treeNodes[i].size()-1; j++){
                treeNodes[i][j]->next = treeNodes[i][j+1];
            }
            treeNodes[i][treeNodes[i].size()-1] = NULL;
        }
    }
};