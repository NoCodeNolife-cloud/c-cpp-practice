/*
编写程序定义类Point,有数据成员x,y,为其定义友元函数实现重载"+"
*/
#include "Point.h"
#include "function.h"
using namespace std;
int main() {
	Point pt(10, 10);
	pt.Print();
	pt = pt + 5;
	pt.Print();
	pt = 10 + pt;
	pt.Print();
	return 0;
}