#pragma once
#include <iostream>
class Polynomial
{
protected:
	double* arr;
	int length;
public:
	/// @brief ���ú����Ĳ���
	Polynomial();
	/// @brief ����һά����ʽ
	/// @param x ����f(x)���Ա���
	/// @return ����f(x)�ļ�����
	double CountValue(double x);
};
