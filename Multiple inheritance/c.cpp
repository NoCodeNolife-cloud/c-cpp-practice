#include <iostream>
#include "c.h"

using namespace std;

C::C(int paraa, int parab, int parac) :A(paraa), B(parab), c(parac) {
	return;
}

void C::printMember() {
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	return;
}