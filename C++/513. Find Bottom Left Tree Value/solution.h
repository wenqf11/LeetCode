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
    int findBottomLeftValue(TreeNode* root) {
        if (!root) return 0;
        int ans = 0, maxDep = 0;
        getBottomLeftValue(root, 1, maxDep, ans);
        return ans;
    }

    void getBottomLeftValue(TreeNode* root, int depth,  int& maxDep, int & ans) {
        if (root == NULL) return;
        if (maxDep < depth) {
            maxDep = depth;
            ans =  root->val;
        }
        getBottomLeftValue(root->left, depth + 1, maxDep, ans);
        getBottomLeftValue(root->right, depth + 1, maxDep, ans);
    }
};