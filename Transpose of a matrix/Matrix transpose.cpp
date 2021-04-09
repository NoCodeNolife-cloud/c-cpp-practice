/*
编写一个3×3矩阵转置的函数,在main()函数中输入数据
*/
#include <iostream>
#include <fstream>
#include "Matrix.h"
using namespace std;
int main() {
	double numstr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	Matrix matrix1(numstr), matrix2;
	matrix1.Show();
	matrix2 = matrix1.Transpose();
	matrix2.Show();
	return 0;
}