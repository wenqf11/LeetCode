#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	ListNode *head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	s.reverseBetween(head, 2, 4);
	system("pause");
	return 0;
}