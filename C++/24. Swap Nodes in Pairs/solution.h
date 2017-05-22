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
	ListNode* swapPairs(ListNode* head) {
		ListNode* ans = new ListNode(0);
		ans->next = head;
		ListNode* tmp;
		head = ans;
		while (head->next!=NULL && head->next->next!=NULL) {
			tmp = head->next;
			head->next = head->next->next;
			tmp->next = head->next->next;
			head->next->next = tmp;
			head = head->next->next;
		}
		return ans->next;
	}
};