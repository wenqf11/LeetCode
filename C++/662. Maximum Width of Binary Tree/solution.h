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
private:
    void getLeftAndRight(TreeNode* root, int index, int depth, vector<int> & left, vector<int> & right) {
        if (!root) return;
        if (left.size() <= depth) {
            left.push_back(index);
        } else {
            left[depth] = min(left[depth], index);
        }
        if (right.size() <= depth) {
            right.push_back(index);
        } else {
            right[depth] = max(right[depth], index);
        }
        getLeftAndRight(root->left, 2 * index - 1, depth + 1, left, right);
        getLeftAndRight(root->right, 2 * index, depth + 1, left, right);
    }
public:
    int widthOfBinaryTree(TreeNode* root) {
        vector<int> left, right;
        getLeftAndRight(root, 1, 0, left, right);
        int ans = 0;
        for (int i = 0; i < left.size(); ++i) {
            ans = max(ans, right[i] - left[i] + 1);
        }
        return ans;
    }
};