#pragma once
using namespace std;

void fn1();
unsigned int* fn2();
void fn3(unsigned int* p);

void fn1() {
	unsigned int* p = fn2();
	fn3(p);
	cout << "The number is:" << *p << endl;
	delete p;
	return;
}
unsigned int* fn2() {
	unsigned int* n = new unsigned int;
	if (n == 0) {
		throw OutOfMemory();
	}
	return n;
}
void fn3(unsigned int* p) {
	long Number;
	cout << "Enter an integer(0~1000):";
	cin >> Number;
	if (Number > 1000 || Number < 0) {
		throw RangeError(Number);
	}
	*p = Number;
	return;
}