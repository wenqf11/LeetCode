#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	Solution s;
	RandomListNode *head = new RandomListNode(0);
	RandomListNode *node1 = new RandomListNode(1);
	RandomListNode *node2 = new RandomListNode(2);
	head->next = node1;
	node1->next = node2;
	head->random = node2;
	node1->random = node2;
	node2->random = node1;
	s.copyRandomList(head);
	return 0;
}
