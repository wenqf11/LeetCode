#pragma once
#include<vector>
#include<string>
#include<climits>
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
	vector<int> preOrderList, postOrderList;

public:
	void leftInOrder(TreeNode* root) {
		if(root == NULL) {
			preOrderList.push_back(INT_MIN);
			return ;
		}
		preOrderList.push_back(root->val);
		leftInOrder(root->left);
		leftInOrder(root->right);
	}

	void rightInOrder(TreeNode* root) {
		if(root == NULL) {
			postOrderList.push_back(INT_MIN);
			return ;
		}
		rightInOrder(root->left);
		rightInOrder(root->right);
		postOrderList.push_back(root->val);
	}

    bool isSymmetric(TreeNode* root) {
    	leftInOrder(root);
    	rightInOrder(root);
    	if(preOrderList.size() != postOrderList.size()) return false;
    	
    	/*for(int i = 0; i < preOrderList.size(); i++){
    		cout << preOrderList[i] << " ";
    	}
    	cout << endl;
    	
    	for(int i = 0; i < postOrderList.size(); i++){
    		cout << postOrderList[i] << " ";
    	}
    	cout << endl;*/

        for(int i = 0; i < preOrderList.size(); i++){
        	if(preOrderList[i] != postOrderList[preOrderList.size()-1-i]) {
        		return false;
        	}
        }
        return true;
    }

};