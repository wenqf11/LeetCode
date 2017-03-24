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
	ListNode *detectCycle(ListNode *head) {
		ListNode *q = head;
		map<ListNode*, bool> isVisited;
		isVisited[q] = true;
		while (q != NULL) {
			q = q->next;
			if (isVisited.find(q) != isVisited.end()) {
				return q;
			}
			isVisited[q] = true;
		}
		return NULL;
	}
};