#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *pre = head, *cur = head->next, *tmp = head->next;
        while (cur && cur->next) {
            pre->next = cur->next;
            cur->next = cur->next->next;
            cur = cur->next;
            pre = pre->next;

        }
        pre->next = tmp;
        return head;
    }
};