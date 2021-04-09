#include "ComplexNumber.h"

ComplexNumber::ComplexNumber()
{
	srand(time(0));
	a = rand() % 100;
	b = rand() % 100;
}

ComplexNumber::ComplexNumber(int paramA, int paramB)
{
	a = paramA;
	b = paramB;
	return;
}

ComplexNumber ComplexNumber::operator+(ComplexNumber& paramComplexNumber)
{
	ComplexNumber tempComplexNumber;
	tempComplexNumber.a = this->a + paramComplexNumber.a;
	tempComplexNumber.b = this->b + paramComplexNumber.b;
	return tempComplexNumber;
}

ComplexNumber ComplexNumber::operator-(ComplexNumber& paramComplexNumber)
{
	ComplexNumber tempComplexNumber;
	tempComplexNumber.a = this->a - paramComplexNumber.a;
	tempComplexNumber.b = this->b - paramComplexNumber.b;
	return tempComplexNumber;
}

ComplexNumber ComplexNumber::operator*(ComplexNumber& paramComplexNumber)
{
	ComplexNumber tempComplexNumber;
	tempComplexNumber.a = this->a * paramComplexNumber.a - this->b * paramComplexNumber.b;
	tempComplexNumber.b = this->a * paramComplexNumber.b + this->b * paramComplexNumber.a;
	return tempComplexNumber;
}

ComplexNumber ComplexNumber::operator/(ComplexNumber& paramComplexNumber) {
	double sq = paramComplexNumber.a * paramComplexNumber.a + paramComplexNumber.b * paramComplexNumber.b;
	ComplexNumber tempComplexNumber;
	tempComplexNumber.a = (this->a * paramComplexNumber.a + this->b * paramComplexNumber.b) / sq;
	tempComplexNumber.b = (this->b * paramComplexNumber.a + this->a * tempComplexNumber.b) / sq;
	return tempComplexNumber;
}

void ComplexNumber::Show() {
	std::cout << this->a << "+" << this->b << "!" << std::endl;
	return;
}

ComplexNumber ComplexNumber::Pow(int paramN)
{
	ComplexNumber tempComplexNumber, tempComplexNumberPro;
	tempComplexNumber.a = this->a;
	tempComplexNumberPro.a = this->a;
	tempComplexNumber.b = this->b;
	tempComplexNumberPro.b = this->b;
	if (paramN == 1) {
		return tempComplexNumber;
	}
	else {
		for (int i = 1; i < paramN; i++) {
			tempComplexNumber = tempComplexNumber * tempComplexNumberPro;
		}
		return tempComplexNumber;
	}
}

ComplexNumber ComplexNumber::Log()
{
	ComplexNumber tempComplexNumber;
	tempComplexNumber.a = log(sqrt(pow(this->a, 2) + pow(this->b, 2)));
	tempComplexNumber.b = atan2(this->b, this->a);
	return tempComplexNumber;
}

ComplexNumber ComplexNumber::Sin()
{
	ComplexNumber tempComplexNumber;
	tempComplexNumber.a = sin(this->a) * (exp(this->b) + 1 / (exp(this->b))) / 2;
	tempComplexNumber.b = cos(this->a) * (exp(this->b) - 1 / (exp(this->b))) / 2;
	return tempComplexNumber;
}

ComplexNumber ComplexNumber::Cos()
{
	ComplexNumber tempComplexNumber;
	tempComplexNumber.a = cos(this->a) * (exp(this->b) + 1 / (exp(this->b))) / 2;
	tempComplexNumber.b = -sin(this->a) * (exp(this->b) - 1 / (exp(this->b))) / 2;
	return tempComplexNumber;
}