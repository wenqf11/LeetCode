#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	ListNode* q = new ListNode(1);
	/*q->next = new ListNode(2);
	q->next->next = new ListNode(3);
	q->next->next->next = new ListNode(4);*/
	
	ListNode* ans = s.swapPairs(q);
	while (ans != NULL) {
		std::cout << ans->val << " " << std::endl;
		ans = ans->next;
	}
	system("pause");
	return 0;
}