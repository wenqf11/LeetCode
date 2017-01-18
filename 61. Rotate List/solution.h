#pragma once
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack> 
#include <numeric>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* rotateRight(ListNode* head, int k) {
		if (head == NULL || head->next == NULL || k == 0) return head;
		ListNode* rotatedList = head, *p = head, *pre = NULL;
		
		int n = 1;
		while(p->next) {
			n++;
			p = p->next;
		}
		
		k = k % n;

		if (k == 0) {
			return head;
		}

		p = head;

		for (int i = 1; i < k; ++i) {
			p = p->next;
			if (p == NULL) p = head;
		}

		while (p->next) {
			pre = rotatedList;
			rotatedList = rotatedList->next;
			p = p->next;
		}

		p->next = head;
		pre->next = NULL;
		return rotatedList;
	}
};