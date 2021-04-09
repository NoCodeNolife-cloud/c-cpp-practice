#include "Assertion.h"

Year::Year()
{
	std::cout << "Enter the year ";
	int tempyear;
	std::cin >> tempyear;
	Set(tempyear);
	return;
}

void Year::Set(int paramYear)
{
	c_year = paramYear;
	return;
}

void Year::Cheak()
{
	if (c_year % 400 == 0 || c_year % 100 != 0 && c_year % 4 == 0) {
		std::cout << "the year is leap year" << std::endl;
	}
	else {
		std::cout << "the year isn't leap year" << std::endl;
	}
	return;
}