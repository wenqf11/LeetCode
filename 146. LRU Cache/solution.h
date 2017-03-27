#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;

class Node {
public:
	int key;
	Node* next;
	Node(int val): key(val), next(NULL) {};
};


class LRUCache {

private:
	map<int, int> cacheMap;
	map<int, Node*> key2Node;
	Node *head = NULL, *tail = NULL;
	int maxSize = 0;

	void moveToTail(Node *prev) {
		if (prev->next == tail) {
			return;
		}

		Node *p = prev->next;
		prev->next = p->next;

		if (p->next != NULL) {
			key2Node[p->next->key] = prev;
		}
		tail->next = p;
		p->next = NULL;
		key2Node[p->key] = tail;
		tail = p;
	}

public:
	LRUCache(int capacity) {
		maxSize = capacity;
		head = new Node(-1);
		tail = head;
	}

	~LRUCache() {
		Node* q = head, *prev = NULL;
		while (q != NULL) {
			prev = q;
			q = q->next;
			delete prev;
		}
	}

	int get(int key) {
		if (cacheMap.find(key) == cacheMap.end()) return -1;
		moveToTail(key2Node[key]);
		return cacheMap[key];
	}

	void put(int key, int value) {
		if (cacheMap.find(key) == cacheMap.end()) {
			Node *q = new Node(key);
			tail->next = q;
			key2Node[key] = tail;
			tail = q;
			if (cacheMap.size() == maxSize) {
				cacheMap.erase(head->next->key);
				q = head->next;
				head->next = head->next->next;
				delete q;
				if (head->next != NULL) {
					key2Node[head->next->key] = head;
				}
			}
		} else {
			moveToTail(key2Node[key]);
		}
		cacheMap[key] = value;
	}
};