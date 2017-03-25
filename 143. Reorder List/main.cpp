#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	s.reorderList(head);
	ListNode* q = head;
	while (q != NULL) {
		cout << q->val << " ";
		q = q->next;
	}
	return 0;
}
