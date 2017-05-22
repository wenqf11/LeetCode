#pragma once
#include<vector>
using std::vector;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *ans = new ListNode(0);
		ListNode *p = ans;
		int carry = 0, num1 = 0, num2 = 0;
		while (l1 != NULL || l2 != NULL) {
			num1 = num2 = 0;
			if (l1 != NULL) num1 = l1->val;
			if (l2 != NULL) num2 = l2->val;
			p->val = (num1 + num2 + carry) % 10;
			carry = (num1 + num2 + carry) / 10;
			
			if(l1 != NULL) l1 = l1->next;
			if(l2 != NULL)  l2 = l2->next;
			if (l1 != NULL || l2 != NULL) {
				p->next = new ListNode(0);
				p = p->next;
			}
		}
		if (carry == 0) {
			p->next = NULL;
		}else{
			p->next = new ListNode(0);
			p = p->next;
			p->val = carry;
			p->next = NULL;
		}
		return ans;
	}
};