#include <iostream>
#include "solution.h"


int main()
{
	Solution s;
	ListNode* head = new ListNode(1);
	cout<<s.partition(head, 2);
	system("pause");
	return 0;
}