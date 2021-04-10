#pragma once
#include "Shape.h"

class Rectangle :public Shape {
private:
	double length;
	double width;
public:
	/**
	 * @brief construct function
	 * @param paraLength double
	 * @param paraWidth double
	*/
	Rectangle(double paraLength, double paraWidth);
	/**
	 * @brief caluate area
	*/
	void caluateArea();
};