#include <iostream>
#include "solution.h"

int main() {
	MyStack *obj = new MyStack();
	obj->push(5);
	int param_2 = obj->pop();
	int param_3 = obj->top();
	bool param_4 = obj->empty();
	cout << param_2 << param_3 << param_4 << endl;
	return 0;
}
