#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
private:
	bool isFinished = false;

public:
	void insert(ListNode* &q, ListNode* p) {
		if (p->next != NULL) {
			insert(q, p->next);
			if (isFinished) return;
			if (q->next == p || q == p) {
				p->next = NULL;
				isFinished = true;
			} else {
				p->next = q->next;
				q->next = p;
				q = p->next;
			}
		} else {
			p->next = q->next;
			q->next = p;
			q = p->next;
		}
	}

	void reorderList(ListNode* head) {
		if (head == NULL || head->next == NULL || head->next->next == NULL) return;
		insert(head, head);
	}
};