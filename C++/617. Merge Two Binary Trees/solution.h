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
    void merge(TreeNode* t1, TreeNode* t2, TreeNode*& r) {
        if (!t1 && !t2) return;
        r = new TreeNode(0);
        if (t1) {
            r->val += t1->val;
        }
        if (t2) {
            r->val += t2->val;
        }

        if (!t1) {
            merge(NULL, t2->left, r->left);
            merge(NULL, t2->right, r->right);
        } else if (!t2) {
            merge(t1->left, NULL, r->left);
            merge(t1->right, NULL, r->right);
        } else {
            merge(t1->left, t2->left, r->left);
            merge(t1->right, t2->right, r->right);
        }
    }
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* root = NULL;
        merge(t1, t2, root);
        return root;
    }
};