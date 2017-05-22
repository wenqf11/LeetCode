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
public:
	bool hasCycle(ListNode *head) {
		ListNode *q = head, *p = head;
		while (p != NULL && p->next != NULL) {
			q = q->next;
			p = p->next->next;
			if (p == q) {
				return true;
			}
		}
		return false;
	}
};