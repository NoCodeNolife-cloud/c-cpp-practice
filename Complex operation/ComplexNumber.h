#pragma once
#include <iostream>
#include <random>
#include <math.h>
/// @brief 复数
class ComplexNumber
{
protected:
	/// @brief 实数
	double a;
	/// @brief 虚数
	double b;
public:
	/// @brief 构造函数
	ComplexNumber();
	/// @brief 设置复数值
	/// @param paramA 实数
	/// @param paramB 虚数
	ComplexNumber(int paramA, int paramB);
	/// @brief 复数加法
	/// @param paramComplexNumber 复数
	/// @return 加法结果
	ComplexNumber operator+ (ComplexNumber& paramComplexNumber);
	/// @brief 复数减法
	/// @param paraComplexNumber 复数
	/// @return 减法结果
	ComplexNumber operator-(ComplexNumber& paramComplexNumber);
	/// @brief 复数乘法
	/// @param paramComplexNumber 复数
	/// @return 乘法结果
	ComplexNumber operator*(ComplexNumber& paramComplexNumber);
	/// @brief 复数除法
	/// @param paramComplexNumber 复数
	/// @return 除法结果
	ComplexNumber operator/(ComplexNumber& paramComplexNumber);
	/// @brief 显示复数
	void Show();
	/// @brief 求幂
	/// @return 幂运算结果
	ComplexNumber Pow(int paramN);
	/// @brief 复数对数
	/// @return 对数运算结果
	ComplexNumber Log();
	/// @brief 复正弦运算
	/// @return 复正弦运算结果
	ComplexNumber Sin();
	/// @brief 复余弦运算
	/// @return 复正弦运算结果
	ComplexNumber Cos();
};
