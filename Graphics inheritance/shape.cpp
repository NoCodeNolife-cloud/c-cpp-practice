#include <iostream>
#include "shape.h"

using namespace std;

Shape::Shape() :area(0.0)
{
	calculateArea();
	return;
}

void Shape::calculateArea()
{
	return;
}

double Shape::getArea()
{
	return area;
}

void Shape::setArea(double paraarea)
{
	area = paraarea;
	return;
}

Shape::~Shape()
{
	return;
}