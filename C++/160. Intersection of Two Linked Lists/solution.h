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
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) {
            return NULL;
        }
        ListNode *q, *p;
        int lenA = 1, lenB = 1;
        q = headA;
        while (q->next != NULL) {
            q = q->next;
            lenA++;
        }
        p = headB;
        while (p->next != NULL) {
            p = p->next;
            lenB++;
        }

        if (p != q) return NULL;

        if (lenA > lenB) {
            for (int i = 0; i < lenA - lenB; i++) {
                headA = headA->next;
            }
        }
        if (lenA < lenB) {
            for (int i = 0; i < lenB - lenA; i++) {
                headB = headB->next;
            }
        }
        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};
