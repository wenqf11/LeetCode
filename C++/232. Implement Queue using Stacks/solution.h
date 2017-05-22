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
#include <sstream>
using namespace std;

// Definition for a binary tree node.
class MyQueue {
public:
	/** Initialize your data structure here. */
	MyQueue() {

	}

	void shiftStack() {
		if (stack2.empty()) {
			while (!stack1.empty()) {
				stack2.push(stack1.top());
				stack1.pop();
			}
		}
	}

	/** Push element x to the back of queue. */
	void push(int x) {
		stack1.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		shiftStack();
		int res = 0;
		if (!stack2.empty()) {
			res = stack2.top();
			stack2.pop();
		}
		return res;
	}

	/** Get the front element. */
	int peek() {
		shiftStack();
		if (!stack2.empty()) return stack2.top();
		return 0;
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		return stack1.empty() && stack2.empty();
	}
private:
	stack<int> stack1, stack2;
};