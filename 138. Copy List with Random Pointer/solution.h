#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <map>
using namespace std;


// Definition for singly-linked list with a random pointer.
struct RandomListNode {
	int label;
	RandomListNode *next, *random;
	RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};


class Solution {
private:
	map<RandomListNode*, RandomListNode*> nodeMap;
public:
	RandomListNode *copyRandomList(RandomListNode *head) {
		if (head == NULL) return NULL;
		RandomListNode *copy = NULL;
		map<RandomListNode*, RandomListNode*>::iterator it = nodeMap.find(head);
		if (it != nodeMap.end()) {
			copy = it->second;
		}
		if (copy == NULL) {
			copy = new RandomListNode(head->label);
			nodeMap[head] = copy;
			copy->next = copyRandomList(head->next);
			copy->random = copyRandomList(head->random);
		}
		return copy;
	}
};