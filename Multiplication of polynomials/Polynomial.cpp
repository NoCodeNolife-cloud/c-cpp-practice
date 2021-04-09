#include "Polynomial.h"

Polynomial::Polynomial()
{
	int i, j;
	for (i = 0; i < k; i++) {
		R[i] = 0.0;
	}
	/// @brief 多项式乘法
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			R[i + j] += A[i] * B[j];
		}
	}
}

void Polynomial::Show()
{
	for (int i = 0; i < 9; i++) {
		std::cout << "R(" << i << ") = " << R[i] << std::endl;
	}
	return;
}