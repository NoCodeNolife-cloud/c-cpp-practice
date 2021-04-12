#include <cstdlib>
#include "function.h"

double Division(double parax,
	double paray) {
	/*throw the bad condition*/
	if (paray == 0.0) {/*not division*/
		throw 0;
	}
	else if (parax == 0.0) {/*result is zero*/
		throw 1;
	}
	else {
		return parax / paray;
	}
}

void testAbort(bool parax) {
	if (parax == true) {
		abort();
		return;
	}
	else {/*parax is false*/
		return;
	}
}