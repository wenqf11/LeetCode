#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	ListNode* head = new ListNode(0);
	head->next = new ListNode(1);
	head->next->next = new ListNode(2);
	ListNode* q = s.reverseList(head);
	while (q != NULL) {
		cout << q->val << endl;
		q = q->next;
	}
	return 0;
}
