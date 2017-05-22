#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	ListNode* head = new ListNode(0);
	head->next = NULL;
	TreeNode* root = s.sortedListToBST(head);
	return 0;
}