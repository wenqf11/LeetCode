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
	ListNode* sortList(ListNode* head) {
		if (head == NULL || head->next == NULL) {
			return head;
		}

		ListNode* fast = head;
		ListNode* slow = head;

		//快慢指针得到中间点
		while (fast->next && fast->next->next) {
			fast = fast->next->next;
			slow = slow->next;
		}

		//将链表拆成两半
		fast = slow->next;
		slow->next = NULL;

		//左右两半分别排序
		ListNode* p1 = sortList(head);
		ListNode* p2 = sortList(fast);

		//合并
		return merge(p1, p2);
	}
	ListNode* merge(ListNode* p1, ListNode* p2) {
		if (!p1 && !p2) return NULL;
		else if (!p1) return p2;
		else if (!p2) return p1;
		ListNode dummy(0);
		ListNode* p = &dummy;

		while (p1 && p2) {
			if (p1->val < p2->val) {
				p->next = p1;
				p1 = p1->next;
			} else {
				p->next = p2;
				p2 = p2->next;
			}

			p = p->next;
		}

		if (p1) {
			p->next = p1;
		} else if (p2) {
			p->next = p2;
		}

		return dummy.next;
	}
};