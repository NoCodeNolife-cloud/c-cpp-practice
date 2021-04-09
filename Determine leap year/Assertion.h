#pragma once
#include <iostream>
class Year
{
protected:
	int c_year;
public:
	/// @brief 构造函数
	Year();
	/// @brief 设置值
	void Set(int paramYear);
	/// @brief 判断闰年
	void Cheak();
};
