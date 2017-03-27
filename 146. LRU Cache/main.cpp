#include <iostream>
#include "solution.h"

// Unit Test

int main() {
	LRUCache cache(2);

	cache.put(1, 1);
	cache.put(2, 2);
	cout << cache.get(1) << endl;      // returns 1
	cache.put(3, 3);
	cout << cache.get(2) << endl;       // returns -1 (not found)
	cache.put(4, 4);
	cout << cache.get(1) << endl;       // returns -1 (not found)
	cout << cache.get(3) << endl;       // returns 3
	cout << cache.get(4) << endl;       // returns 4
	return 0;
}
