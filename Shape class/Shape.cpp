/*
定义一个基类Shape,在此基础上派生出Rectangle和Circle,二者都有getArea()函数计算对象的面积,使用Rectangle类创建一个派生类
*/
#include <iostream>
#include <fstream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;
int main() {
	fstream out("out.txt", ios::out);
	Shape* sp;
	sp = new Circle(5);
	out << "The area of the Circle is " << sp->getArea() << endl;
	delete sp;
	sp = new Rectangle(4, 6);
	out << "The area of the Rectangle is " << sp->getArea() << endl;
	delete sp;
	sp = new Square(5);
	out << "The area of the Square is " << sp->getArea() << endl;
	return 0;
}