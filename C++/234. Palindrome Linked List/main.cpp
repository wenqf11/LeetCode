#include <iostream>
#include "solution.h"

int main() {
	Solution s;
	ListNode *head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(0);
	head->next->next->next = new ListNode(2);
	head->next->next->next->next = new ListNode(1);
	cout << s.isPalindrome(head) << endl;
	return 0;
}
