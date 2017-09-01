#include <iostream>
#include "solution.h"

int main() {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    Solution *obj = new Solution(head);

    cout << obj->getRandom() << endl;
    return 0;
}