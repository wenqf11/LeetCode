#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <set>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
        root = head;
        srand((unsigned)time(0));
    }

    /** Returns a random node's value. */
    int getRandom() {
        ListNode* q = root;
        int n = 0;
        while (q != NULL) {
            q = q->next;
            ++n;
        }
        int ranN = rand() % n;
        q = root;
        int i = 0;
        while (i < ranN) {
            q = q->next;
            ++i;
        }
        return q->val;
    }
private:
    ListNode* root;
};
