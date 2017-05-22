#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	ListNode* head= new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(2);
	head->next->next->next = new ListNode(3);
	cout<<s.deleteDuplicates(head);
	system("pause");
	return 0;
}