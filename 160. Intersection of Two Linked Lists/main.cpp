#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	ListNode* head1 = new ListNode(0);
	ListNode* head2 = new ListNode(1);
	s.getIntersectionNode(head1, head2);
	return 0;
}
