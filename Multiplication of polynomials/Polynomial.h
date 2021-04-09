#pragma once
#include <iostream>
/// @brief 多项式乘法
class Polynomial
{
protected:
	double A[6] = { -4.0,5.0,2.0,-1.0,3.0,2.0 };
	int m = 6;
	double B[4] = { -3.0,-2.0,1.0,3.0 };
	int n = 4;
	double R[9];
	int k = 9;
public:
	Polynomial();
	void Show();
};
