#include "Assertion.h"
int main() {
	Polynomial polynomial;
	double x;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "The result is " << polynomial.CountValue(x);
	return 0;
}