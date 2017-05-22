#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using std::string;
using std::vector;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode *res = new ListNode(0);
		res->next = head;
		ListNode *tmp = res;
		for (int i = 0; i < n; i++) {
			head = head->next;
		}
		while (head != NULL) {
			head = head->next;
			tmp = tmp->next;
		}
		tmp->next = tmp->next->next;
		return res->next;
	}
};