#include "Dimensional_polynomial_evaluation.h"

DimensionalPolynomialEvaluation::DimensionalPolynomialEvaluation()
{
	m = 4;
	n = 5;
	str = new double[21];
	str[0] = 1.0;
	str[1] = 2.0;
	str[2] = 3.0;
	str[3] = 4.0;
	str[4] = 5.0;
	str[5] = 6.0;
	str[6] = 7.0;
	str[7] = 8.0;
	str[8] = 9.0;
	str[9] = 10.0;
	str[10] = 11.0;
	str[11] = 12.0;
	str[12] = 13.0;
	str[13] = 14.0;
	str[14] = 15.0;
	str[15] = 16.0;
	str[16] = 17.0;
	str[17] = 18.0;
	str[18] = 19.0;
	str[19] = 20.0;
	return;
}

double DimensionalPolynomialEvaluation::Polynomial(double x, double y)
{
	int i, j;
	double result = 0.0, temp, tt = 1.0;
	for (i = 0; i < m; i++) {
		temp = str[i * n + n - 1] * tt;
		for (j = n - 2; j >= 0; j--) {
			temp = temp * y + str[i * n + j] * tt;
		}
		result += temp;
		tt *= x;
	}
	return result;
}