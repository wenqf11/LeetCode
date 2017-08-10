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
private:
    unordered_map<int, int> sumMap;
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> ans;
        getSubTreeSum(root);
        unsigned currentMax = 0;
        for (auto it = sumMap.cbegin(); it != sumMap.cend(); ++it )
            if (it->second > currentMax) {
                currentMax = it->second;
            }
        for (auto it = sumMap.cbegin(); it != sumMap.cend(); ++it )
            if (it->second == currentMax) {
                ans.push_back(it->first);
            }
        return ans;
    }

    int getSubTreeSum(TreeNode* root) {
        if (root == NULL) return 0;
        int sum = root->val + getSubTreeSum(root->left) + getSubTreeSum(root->right);
        sumMap[sum]++;
        return sum;
    }
};