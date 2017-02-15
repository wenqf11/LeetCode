#pragma once
#include<vector>
#include<string>
#include<cstring>
#include<climits>
#include<algorithm>
#include<cmath>
#include<stack> 
#include <numeric>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
using namespace std;


// Definition for singly-linked list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* reverseBetween(ListNode* head, int m, int n) {
		ListNode *q = NULL, *reverseHead = NULL, *reverseTail = NULL, *p = NULL, *prev = NULL;
		ListNode *mark = new ListNode(0);
		mark->next = head;
		q = mark;
		int i = 1;
		m++;
		n++;
		while (q != NULL) {
			if (i == m - 1) {
				reverseHead = q;
				q = q->next;
			}else if (i == m) {
				reverseTail = q;
				p = reverseTail;
				q = q->next;
			} else if (m < i && i < n) {
				prev = q;
				q = q->next;
				prev->next = p;
				p = prev;
			} else if (i == n) {
				prev = q;
				q = q->next;
				prev->next = p;
				reverseTail->next = q;
				reverseHead->next = prev;
			} else {
				q = q->next;
			}
			i++;
		}
		return mark->next;
	}
};