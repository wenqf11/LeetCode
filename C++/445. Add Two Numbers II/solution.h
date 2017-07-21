#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <stack>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
private:
    stack<int> list2stack(ListNode* l1) {
        stack<int> st;
        ListNode* p = l1;
        while (p) {
            st.push(p->val);
            p = p->next;
        }
        return st;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> stack1 = list2stack(l1), stack2 = list2stack(l2);
        int carry = 0;
        ListNode* res = new ListNode(0);
        while (!(stack1.empty() && stack2.empty() && carry == 0)) {
            int sum = carry;
            if (!stack1.empty()) {
                sum += stack1.top();
                stack1.pop();
            }

            if (!stack2.empty()) {
                sum += stack2.top();
                stack2.pop();
            }
            ListNode* p = new ListNode(sum % 10);
            p->next = res->next;
            res->next = p;
            carry = sum / 10;
        }
        return res->next;
    }
};