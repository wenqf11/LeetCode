#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	ListNode *head = new ListNode(1);

	ListNode* res = s.removeNthFromEnd(head, 1);
	while(res != NULL){
		std::cout << res->val << std::endl;
	}
	system("pause");
	return 0;
}