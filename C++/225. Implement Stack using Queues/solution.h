#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

class MyStack {
public:
	/** Initialize your data structure here. */
	MyStack() {

	}

	/** Push element x onto stack. */
	void push(int x) {
		queue<int> tmp;
		while (!q.empty()) {
			tmp.push(q.front());
			q.pop();
		}
		q.push(x);
		while (!tmp.empty()) {
			q.push(tmp.front());
			tmp.pop();
		}
	}

	/** Removes the element on top of the stack and returns that element. */
	int pop() {
		int res = q.front();
		q.pop();
		return res;
	}

	/** Get the top element. */
	int top() {
		return q.front();
	}

	/** Returns whether the stack is empty. */
	bool empty() {
		return q.empty();
	}

private:
	queue<int> q;
};