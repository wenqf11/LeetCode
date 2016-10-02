#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include <stack>  
using std::string;
using std::vector;
using std::stack;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* res = new ListNode(0);
		ListNode* head = res;
		while (l1 != NULL || l2 != NULL) {
			if (l1 == NULL && l2 == NULL) {
				break;
			}else if (l2==NULL || (l1!=NULL && l1->val<=l2->val)) {
				ListNode* tmp = new ListNode(l1->val);
				head->next = tmp;
				head = head->next;
				l1 = l1->next;
			}
			else {
				ListNode* tmp = new ListNode(l2->val);
				head->next = tmp;
				head = head->next;
				l2 = l2->next;
			}
		}
		head->next = NULL;
		return res->next;
	}
};