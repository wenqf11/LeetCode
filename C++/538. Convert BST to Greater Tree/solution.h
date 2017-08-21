#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <set>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        traverseBST(root, sum);
        return root;
    }

    void traverseBST(TreeNode* root, int& sum) {
        if (!root) return;
        traverseBST(root->right, sum);
        root->val += sum;
        sum = root->val;
        traverseBST(root->left, sum);
    }
};