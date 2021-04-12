#include <iostream>
#include "function.h"

using namespace std;

int main() {
	try {
		cout << Division(0, 10) << endl;/*null input throw 1*/
	}
	catch (int msg) {
		if (msg == 0) {
			cerr << "bad input" << endl;
		}
		else if (msg == 1) {
			cerr << "null output" << endl;
		}
	}
	try {
		cout << Division(10, 0) << endl;/*null input throw 1*/
	}
	catch (int msg) {
		if (msg == 0) {
			cerr << "bad input" << endl;
		}
		else if (msg == 1) {
			cerr << "null output" << endl;
		}
	}
	testAbort(true);/*terminate program*/
	system("pause");
	return 0;
}