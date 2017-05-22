#include <iostream>
#include "solution.h"

// Unit Test

int main()
{
	Solution s;
	ListNode* q = NULL;
	ListNode* p = new ListNode(-2);
	ListNode* r = new ListNode(-3);
	r->next = new ListNode(-2);
	r->next->next = new ListNode(1);
	vector<ListNode*> lists;
	lists.push_back(q);
	lists.push_back(p);
	lists.push_back(r);
	//std::cout << s.isValid("{}[]()") << std::endl;
	ListNode* ans = s.mergeKLists(lists);
	while (ans != NULL) {
		std::cout << ans->val << " ";
		ans = ans->next;
	}
	system("pause");
	return 0;
}