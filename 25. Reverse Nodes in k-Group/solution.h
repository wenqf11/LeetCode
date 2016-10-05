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
	 ListNode* reverseKGroup(ListNode* head, int k) {
		 ListNode* ans = new ListNode(0);
		 ans->next = head;
		 head = ans;
		 while (head->next != NULL) {
			 head = reverseKNodes(head, k);
		 }
		 return ans->next;
	 }
	 ListNode* reverseKNodes(ListNode* head, int k) {
		 ListNode* node = head;
		 for (int i = 0; i < k; i++) {
			 if (node->next == NULL) return node;
			 node = node->next;
		 }

		 ListNode* first = head->next;
		 ListNode* prevous = first;
		 ListNode* second = first->next;

		 for (int i = 0; i < k - 1; i++) {
			 ListNode* tmp = second->next;
			 second->next = first;
			 first = second;
			 second = tmp;
		 }

		 head->next = first;
		 prevous->next = second;
		 return prevous;
	 }
 };