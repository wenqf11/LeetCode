#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;

class MinStack {
public:
    stack<int> minStack, stk;
    /** initialize your data structure here. */
    MinStack() {
    }

    void push(int x) {
        stk.push(x);
        if (minStack.empty() || minStack.top() >= x) {
            minStack.push(x);
        }
    }

    void pop() {
        int top = stk.top();
        stk.pop();
        if (top == minStack.top()) {
            minStack.pop();
        }
    }

    int top() {
        return stk.top();
    }

    int getMin() {
        return minStack.top();
    }
};
