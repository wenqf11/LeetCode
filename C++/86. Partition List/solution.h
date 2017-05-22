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


/**
* Definition for singly-linked list.
*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* partition(ListNode* head, int x) {
		ListNode *mark1 = new ListNode(0);
		ListNode *mark2 = new ListNode(0);
		ListNode *p1 = mark1, *p2 = mark2;
		while (head != NULL) {
			if (head->val < x) {
				p1->next = head;
				p1 = p1->next;
			} else {
				p2->next = head;
				p2 = p2->next;
			}
			head = head->next;
		}
		p1->next = mark2->next;
		p2->next = NULL;
		return mark1->next;
	}
};