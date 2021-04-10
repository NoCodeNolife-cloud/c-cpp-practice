#include "Shape.h"
#include <iostream>

using namespace std;

void Shape::printArea() {
	cout << "当前没有形状设置" << endl;
	return;
}

double Shape::caluateArea() {
	return this->area;
}