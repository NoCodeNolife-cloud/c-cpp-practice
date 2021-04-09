#include <iostream>
#include "OutOfMemory.h"
#include "Exception.h"
#include "RangeError.h"
#include "Function.h"
using namespace std;

int main() {
	try {
		fn1();
	}
	catch (Exception& theException) {
		theException.PrintError();
	}
	return 0;
}