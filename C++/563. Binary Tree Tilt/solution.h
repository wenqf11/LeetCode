#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
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
private:
    int sumUpTilt(TreeNode* root, int& totTilt) {
        if (root == NULL) return 0;
        int left = sumUpTilt(root->left, totTilt);
        int right = sumUpTilt(root->right, totTilt);
        totTilt += abs(left - right);
        return left + right + root->val;
    }
public:
    int findTilt(TreeNode* root) {
        int totTilt = 0;
        sumUpTilt(root, totTilt);
        return totTilt;
    }
};