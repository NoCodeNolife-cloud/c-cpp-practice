/*
编写递归函数getPower计算x的y次方,在同一个程序中针对整型和实型实现两个重载的函数
※函数1与函数2重载
*/
#include <iostream>
#include <fstream>
using namespace std;
int getPower(int x, int y) {//函数1
	if (y == 1) {
		return x;
	}
	else if (y > 1) {
		return x * getPower(x, y - 1);
	}
}
double getPower(double x, int y) {//函数2
	if (y == 1) {
		return x;
	}
	else if (y > 1) {
		return x * getPower(x, y - 1);
	}
}
int main() {
	fstream result("result.txt", ios::out);
	if (!result.is_open()) {
		cout << "not open" << endl;
		exit(EXIT_FAILURE);
	}
	cout << "Enter a int base number:";
	int num_int;
	cin >> num_int;
	cout << "Enter a double base number:";
	double num_double;
	cin >> num_double;
	cout << "To what power?";
	int y;
	cin >> y;
	result << num_int << " to the " << y << "th power is " << getPower(num_int, y) << endl;
	result << num_double << " to the " << y << "th power is " << getPower(num_double, y) << endl;
	return 0;
}