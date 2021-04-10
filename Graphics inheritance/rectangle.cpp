#include <iostream>
#include "rectangle.h"

using namespace std;

void Rectangle::calculateArea()
{
	setArea(length * width);
	return;
}

Rectangle::Rectangle()
{
	cout << "enter the length = ";
	cin >> length;
	cout << "enter the width = ";
	cin >> width;
	calculateArea();
	return;
}

Rectangle::Rectangle(double paralength, double parawidth) :length(paralength), width(parawidth)
{
	calculateArea();
	return;
}

double Rectangle::getLength()
{
	return length;
}

void Rectangle::setLength(double paralength)
{
	length = paralength;
	calculateArea();
	return;
}

double Rectangle::getWidth()
{
	return width;
}

void Rectangle::setWidth(double parawidth)
{
	width = parawidth;
	calculateArea();
	return;
}

Rectangle::~Rectangle()
{
	return;
}