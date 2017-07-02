#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
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
    int getSum(TreeNode* root, int son) {
        if (!root) return 0;
        if (!root->left && !root->right) {
            if (son == 1) return root->val;
        }
        return getSum(root->left, 1) + getSum(root->right, 2);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return 0;
        return getSum(root->left, 1) + getSum(root->right, 2);
    }
};