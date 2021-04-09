/*
设计并测试一个名为Rectangle的矩形类,其属性为矩形的左下角与右上角两个点的坐标,根据坐标计算矩形的面积
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
class Rectangle {
private:
	double a, b;
	double c, d;
public:
	Rectangle(int _a, int _b, int _c, int _d);
	double GetArea();
	double GetHight();
	double GetWidth();
};
Rectangle::Rectangle(int _a, int _b, int _c, int _d)
{
	this->a = _a;
	this->b = _b;
	this->c = _c;
	this->d = _d;
}
double Rectangle::GetArea()
{
	return (a - c) * (b - d);
}
double Rectangle::GetHight()
{
	return abs(b - d);
}
double Rectangle::GetWidth()
{
	return abs(a - c);
}
int main() {
	fstream result("result.txt", ios::out);
	Rectangle rectangle(1.0, 2.0, 2.0, 3.0);
	result << setiosflags(ios::showpoint) << rectangle.GetArea() << endl << "height = " << rectangle.GetHight() << endl << "width = " << rectangle.GetWidth() << endl;
	return 0;
}