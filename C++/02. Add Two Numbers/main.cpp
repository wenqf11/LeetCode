#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;

	ListNode *num1 = new ListNode(5);
	ListNode *num2 = new ListNode(0);
	ListNode *q = num1;
	ListNode *p = num2;
	for (int i = 5; i < 7; i++) {
		q->next = new ListNode(i);
		q = q->next;
		
	}
	for (int i = 5; i < 6; i++) {
		p->next = new ListNode(i);
		p = p->next;
	}
	q->next = NULL;
	p->next = NULL;

	ListNode *ans = s.addTwoNumbers(num1, num2);
	while (ans != NULL) {
		std::cout << ans->val;
		ans = ans->next;
	}
	system("pause");
	return 0;
}