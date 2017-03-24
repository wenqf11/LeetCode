#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	ListNode* head = new ListNode(1);

	s.detectCycle(head);
	return 0;
}
