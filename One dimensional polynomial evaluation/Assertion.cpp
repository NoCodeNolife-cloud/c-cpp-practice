#include "Assertion.h"

Polynomial::Polynomial()
{
	std::cout << "Enter the number of polynomial entries : ";
	std::cin >> length;
	std::cout << "Input polynomial parameter : ";
	arr = new double[length];
	int temp = length - 1;
	while (temp >= 0) {
		std::cin >> arr[temp];
		temp--;
	}
	return;
}

double Polynomial::CountValue(double x)
{
	int i;
	double result;
	result = *(arr + length - 1);
	for (i = length - 2; i >= 0; i--) {
		result = result * x + *(arr + i);
	}
	return result;
}