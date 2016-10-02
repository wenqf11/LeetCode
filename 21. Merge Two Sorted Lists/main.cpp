#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	ListNode* q = new ListNode(0);
	q->next = new ListNode(5);
	ListNode* p = new ListNode(1);
	p->next = new ListNode(2);
	//std::cout << s.isValid("{}[]()") << std::endl;
	ListNode* ans = s.mergeTwoLists(p, q);
	system("pause");
	return 0;
}