#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	ListNode* head = new ListNode(1);
	cout << s.removeElements(head, 1) << endl;
	return 0;
}
