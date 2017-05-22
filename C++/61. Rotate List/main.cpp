#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = NULL;
	s.rotateRight(head, 2);
	system("pause");
	return 0;
}