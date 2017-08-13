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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        getLargest(root, 0, res);
        return res;
    }

    void getLargest(TreeNode* root, int depth, vector<int>& res) {
        if (!root) return;
        if (res.size() <= depth) {
            res.push_back(root->val);
        } else {
            res[depth] = max(res[depth], root->val);
        }

        getLargest(root->left, depth + 1, res);
        getLargest(root->right, depth + 1, res);
    }
};