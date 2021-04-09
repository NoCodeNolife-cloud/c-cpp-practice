#pragma once
#include <iostream>
class DimensionalPolynomialEvaluation
{
protected:
	double* str;
	int m, n;
public:
	/// @brief 构造函数
	DimensionalPolynomialEvaluation();
	/// @brief 求值
	/// @return 返回值
	double Polynomial(double x, double y);
};
