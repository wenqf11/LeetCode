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

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        maxDepth(root, res);
        return res;
    }
    int maxDepth(TreeNode* root, int& res) {
        if (!root) return 0;
        int left = maxDepth(root->left, res);
        int right = maxDepth(root->right, res);
        res = max(res, left + right);
        return max(left, right) + 1;
    }
};