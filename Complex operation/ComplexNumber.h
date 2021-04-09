#pragma once
#include <iostream>
#include <random>
#include <math.h>
/// @brief ����
class ComplexNumber
{
protected:
	/// @brief ʵ��
	double a;
	/// @brief ����
	double b;
public:
	/// @brief ���캯��
	ComplexNumber();
	/// @brief ���ø���ֵ
	/// @param paramA ʵ��
	/// @param paramB ����
	ComplexNumber(int paramA, int paramB);
	/// @brief �����ӷ�
	/// @param paramComplexNumber ����
	/// @return �ӷ����
	ComplexNumber operator+ (ComplexNumber& paramComplexNumber);
	/// @brief ��������
	/// @param paraComplexNumber ����
	/// @return �������
	ComplexNumber operator-(ComplexNumber& paramComplexNumber);
	/// @brief �����˷�
	/// @param paramComplexNumber ����
	/// @return �˷����
	ComplexNumber operator*(ComplexNumber& paramComplexNumber);
	/// @brief ��������
	/// @param paramComplexNumber ����
	/// @return �������
	ComplexNumber operator/(ComplexNumber& paramComplexNumber);
	/// @brief ��ʾ����
	void Show();
	/// @brief ����
	/// @return ��������
	ComplexNumber Pow(int paramN);
	/// @brief ��������
	/// @return ����������
	ComplexNumber Log();
	/// @brief ����������
	/// @return ������������
	ComplexNumber Sin();
	/// @brief ����������
	/// @return ������������
	ComplexNumber Cos();
};
