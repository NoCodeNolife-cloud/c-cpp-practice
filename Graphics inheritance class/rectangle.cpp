#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double paraLength, double paraWidth) :length(paraLength), width(paraWidth) {
	return;
}

void Rectangle::caluateArea() {
	area = length * width;
	cout << Shape::caluateArea() << endl;
	return;
}