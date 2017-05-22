#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	MinStack sk = MinStack();
	sk.push(2);
	sk.push(3);
	cout << sk.getMin() << endl;
	return 0;
}
