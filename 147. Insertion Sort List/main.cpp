#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	ListNode* head = new ListNode(1);
	head->next = new ListNode(3);
	head->next->next = new ListNode(2);
	ListNode* q = s.insertionSortList(head);
	while (q != NULL) {
		cout << q->val << " ";
		q = q->next;
	}
	return 0;
}
