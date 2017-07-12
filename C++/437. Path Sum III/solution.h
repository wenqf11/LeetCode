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
    int pathSum(TreeNode* root, int sum) {
        if (root == NULL)
            return 0;
        return dfs(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }

private:
    int dfs(TreeNode* root, int sum) {
        int res = 0;
        if (root == NULL)
            return res;
        if (sum == root->val)
            res++;
        res += dfs(root->left, sum - root->val);
        res += dfs(root->right, sum - root->val);
        return res;
    }
};