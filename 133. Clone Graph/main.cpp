#include <iostream>
#include "solution.h"

// Unit Test

void display(UndirectedGraphNode* node) {
	queue<UndirectedGraphNode*> q;
	UndirectedGraphNode *qNode;
	map<int, UndirectedGraphNode*> label2Node;

	q.push(node);
	label2Node[node->label] = node;

	while (!q.empty()) {
		qNode = q.front();
		cout << qNode->label << ", ";
		q.pop();

		for (int i = 0; i < qNode->neighbors.size(); i++) {
			map<int, UndirectedGraphNode*>::iterator iter = label2Node.find(qNode->neighbors[i]->label);

			if (iter == label2Node.end()) {
				label2Node[qNode->neighbors[i]->label] = qNode->neighbors[i];
				q.push(qNode->neighbors[i]);
				cout << qNode->neighbors[i]->label << " ";
			}
			cout << qNode->neighbors[i]->label << " ";
		}
		cout << endl;
	}
}


int main() {
	Solution s;
	//cout << s.minCut("fifgbeajcacehiicccfecbfhhgfiiecdcjjffbghdidbhbdbfbfjccgbbdcjheccfbhafehieabbdfeigbiaggchaeghaijfbjhi") << endl;
	UndirectedGraphNode* head = new  UndirectedGraphNode(0);
	UndirectedGraphNode* one = new  UndirectedGraphNode(1);
	UndirectedGraphNode* two = new  UndirectedGraphNode(2);
	head->neighbors.push_back(one);
	head->neighbors.push_back(two);

	one->neighbors.push_back(head);
	one->neighbors.push_back(two);

	two->neighbors.push_back(head);
	two->neighbors.push_back(one);
	two->neighbors.push_back(two);
	display(head);

	UndirectedGraphNode* res = s.cloneGraph(head);

	display(res);
	return 0;
}
