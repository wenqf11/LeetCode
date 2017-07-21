#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    ListNode* l1 = new ListNode(9);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(4);

    ListNode* l2 = new ListNode(6);
    l2->next = new ListNode(6);

    ListNode* res = s.addTwoNumbers(l1, l2);
    ListNode* q = res;
    while (q) {
        cout << q->val << "->";
        q = q->next;
    }
}