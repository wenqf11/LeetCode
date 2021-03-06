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
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode *mark = new ListNode(0),*q = head;
		ListNode *temp;
		bool flag;
		mark->next = head;
		ListNode *prev = mark;
		while (q != NULL) { 
			flag = false;
			while (q->next!=NULL && q->val == q->next->val) {
				flag = true;
				temp = q->next;
				q->next = q->next->next;
				delete temp;
			}
			if (flag) {
				temp = q;
				prev->next = prev->next->next;
				delete temp;
				q = prev->next;
			} else {
				prev = prev->next;
				q = q->next;
			}
		}
		return mark->next;
	}
};