/*
定义一个Circle类,有数据成员radius,成员函数getArea(),计算圆的面积,构造一个Circle的对象进行测试
*/
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
class Circle {
private:
	double radius;
public:
	Circle(double _radius);
	~Circle();
	double GetArea();
};
Circle::Circle(double _radius)
{
	radius = _radius;
}
Circle::~Circle()
{
}
double Circle::GetArea()
{
	return 3.1415 * pow(radius, 2);
}
int main() {
	fstream result("result.txt", ios::out);
	int i = 5;
	Circle circle(i);
	result << i << " radius circle area is " << circle.GetArea() << endl;
	return 0;
}