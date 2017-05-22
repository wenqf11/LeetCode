#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool isPalindrome(ListNode* head) {
		if (!head || !head->next) return true;
		ListNode *slow, *fast;
		fast = head;
		slow = head;

		while (fast->next && fast->next->next) {
			slow = slow->next;
			fast = fast->next->next;
		}

		ListNode *prev = slow->next, *now = prev->next;
		prev->next = NULL;
		while (now) {
			ListNode *tmp = now->next;
			now->next = prev;
			prev = now;
			now = tmp;
		}

		ListNode *p = head, *q = prev;

		while (p && q) {
			if (p->val != q->val) return false;
			p = p->next;
			q = q->next;
		}
		return true;

	}
};