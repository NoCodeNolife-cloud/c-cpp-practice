#pragma once
#include <iostream>
class Polynomial
{
protected:
	double* arr;
	int length;
public:
	/// @brief 设置函数的参数
	Polynomial();
	/// @brief 计算一维多项式
	/// @param x 函数f(x)的自变量
	/// @return 返回f(x)的计算结果
	double CountValue(double x);
};
