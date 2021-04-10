#pragma once
#include "shape.h"

class Rectangle :public Shape {
private:
	double length;
	double width;
	/**
	 * @brief calculate area
	*/
	void calculateArea();
public:
	/**
	 * @brief default constructor
	*/
	Rectangle();
	/**
	 * @brief constructor
	 * @param paralength double
	 * @param parawidth double
	*/
	Rectangle(double paralength, double parawidth);
	/**
	 * @brief get length
	 * @return double(area)
	*/
	double getLength();
	/**
	 * @brief set length
	 * @param paralength double
	*/
	void setLength(double paralength);
	/**
	 * @brief get width
	 * @return double(width)
	*/
	double getWidth();
	/**
	 * @brief set width
	 * @param parawidth double
	*/
	void setWidth(double parawidth);
	~Rectangle();
};