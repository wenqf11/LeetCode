#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
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
public:
    int rob(TreeNode* root) {
        vector<int> res = getRob(root);
        return max(res[0], res[1]);
    }

    vector<int> getRob(TreeNode* root) {
        vector<int> res(2, 0);
        if (!root) return res;

        vector<int> left = getRob(root->left);
        vector<int> right = getRob(root->right);
        res[0] = max(left[0], left[1]) + max(right[0], right[1]);
        res[1] = left[0] + right[0] + root->val;
        return res;
    }
};