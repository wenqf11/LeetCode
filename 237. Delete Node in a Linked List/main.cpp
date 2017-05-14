#include <iostream>
#include "solution.h"

int main() {
	Solution s;
	ListNode *head = new ListNode(0);
	head->next = new ListNode(1);
	head->next->next = new ListNode(1);
	s.deleteNode(head->next);
	return 0;
}
