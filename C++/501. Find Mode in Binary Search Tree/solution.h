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
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> m;
        vector<int> ans;
        int mostFreq;
        inorder(root, m, mostFreq);
        for (auto a : m) {
            if (a.second == mostFreq) {
                ans.push_back(a.first);
            }
        }
        return ans;
    }

    void inorder(TreeNode* root, unordered_map<int, int>& m, int& mostFreq) {
        if (!root) return;
        inorder(root->left, m, mostFreq);
        mostFreq = max(mostFreq, ++m[root->val]);
        inorder(root->right, m, mostFreq);
    }
};