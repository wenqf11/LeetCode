#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};

class Solution {
public:
	ListNode* insertionSortList(ListNode* head) {
		ListNode* sortedHead = new ListNode(0), *p = head;
		ListNode* q = sortedHead, *tmp = NULL;
		while (p != NULL) {
			q = sortedHead;
			while (q->next != NULL && q->next->val < p->val) {
				q = q->next;
			}
			tmp = p->next;
			p->next = q->next;
			q->next = p;
			p = tmp;
		}
		return sortedHead->next;
	}
};