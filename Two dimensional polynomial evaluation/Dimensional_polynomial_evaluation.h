#pragma once
#include <iostream>
class DimensionalPolynomialEvaluation
{
protected:
	double* str;
	int m, n;
public:
	/// @brief ���캯��
	DimensionalPolynomialEvaluation();
	/// @brief ��ֵ
	/// @return ����ֵ
	double Polynomial(double x, double y);
};
