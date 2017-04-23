#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <sstream>
#include <algorithm>
#include <unordered_map>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* q = NULL, *tmp = NULL;
		ListNode* qNext = head;
		while (qNext != NULL) {
			tmp = qNext->next;
			qNext->next = q;
			q = qNext;
			qNext = tmp;
		}
		return q;
	}
};