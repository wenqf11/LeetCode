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
	ListNode* removeElements(ListNode* head, int val) {
		ListNode* dummy = new ListNode(0);
		dummy->next = head;
		ListNode* q = head, *prev = dummy;
		while (q != NULL) {
			if (q->val == val) {
				prev->next = q->next;
				delete q;
			} else {
				prev = prev->next;
			}
			q = q->next;
		}
		return dummy->next;
	}
};