#pragma once
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


struct UndirectedGraphNode {
	int label;
	vector<UndirectedGraphNode *> neighbors;
	UndirectedGraphNode(int x) : label(x) {};

};

class Solution {
public:
	UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
		if (node == NULL) return NULL;
		UndirectedGraphNode *head = NULL, *cNode = NULL, *cNeighborNode = NULL, *qNode = NULL;
		queue<UndirectedGraphNode*> q;
		map<int, UndirectedGraphNode*> label2Node;
		map<int, UndirectedGraphNode*>::iterator it;

		q.push(node);
		cNode = new UndirectedGraphNode(node->label);
		label2Node[cNode->label] = cNode;
		head = cNode;

		while (!q.empty()) {
			qNode = q.front();
			q.pop();

			it = label2Node.find(qNode->label);
			if (it == label2Node.end()) break;
			cNode = it->second;

			for (int i = 0; i < qNode->neighbors.size(); i++) {
				map<int, UndirectedGraphNode*>::iterator iter = label2Node.find(qNode->neighbors[i]->label);

				if (iter == label2Node.end()) {
					cNeighborNode = new UndirectedGraphNode(qNode->neighbors[i]->label);
					label2Node[qNode->neighbors[i]->label] = cNeighborNode;
					cNode->neighbors.push_back(cNeighborNode);
					q.push(qNode->neighbors[i]);
				} else {
					cNode->neighbors.push_back(iter->second);
				}

			}
		}
		return head;
	}
};