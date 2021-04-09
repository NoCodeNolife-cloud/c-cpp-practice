/*
复数运算
*/
#include "ComplexNumber.h"
int main() {
	/// @brief 测试Pow函数
	ComplexNumber complexNumber_1(3, 5);
	ComplexNumber complexNumber_2;
	complexNumber_1.Show();
	complexNumber_2 = complexNumber_1.Pow(2);
	(complexNumber_1 * complexNumber_1).Show();
	complexNumber_2.Show();
	/// @brief 测试Log函数
	ComplexNumber complexNumber_3(2, 3);
	complexNumber_2 = complexNumber_3.Log();
	complexNumber_2.Show();
	/// @brief 测试Sin函数
	ComplexNumber complexNumber_4(1, 4);
	complexNumber_2 = complexNumber_4.Sin();
	complexNumber_2.Show();
	/// @brief 测试Cos函数
	/// @return
	ComplexNumber complexNumber_5(1, 4);
	complexNumber_2 = complexNumber_5.Cos();
	complexNumber_2.Show();
	return 0;
}