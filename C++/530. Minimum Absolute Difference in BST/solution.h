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
    int getMinimumDifference(TreeNode* root) {
        int ans = INT_MAX, pre = -1;
        inorder(root, pre, ans);
        return ans;
    }

    void inorder(TreeNode* root, int& pre, int& ans) {
        if (!root) return;
        inorder(root->left, pre, ans);
        if (pre != -1) ans = min(ans, root->val - pre);
        pre = root->val;
        inorder(root->right, pre, ans);
    }
};