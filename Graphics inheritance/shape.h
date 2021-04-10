#pragma once

class Shape {
private:
	double area;
	void calculateArea();
	/**
	 * @brief get area
	 * @return double(area)
	*/
public:
	/**
	 * @brief constructor
	*/
	Shape();
	/**
	 * @brief calculation area
	*/
	double getArea();
	/**
	 * @brief set area
	 * @param paraarea double
	*/
	void setArea(double paraarea);
	~Shape();
};