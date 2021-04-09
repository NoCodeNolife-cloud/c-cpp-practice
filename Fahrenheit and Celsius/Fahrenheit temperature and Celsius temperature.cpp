/*
编写函数把华氏温度转换成摄氏温度,公式为
	C=5/9*(F-32)
*/
#include <fstream>
#include <iostream>
using namespace std;
double function(double F) {
	return (5.0 / 9.0) * (F - 32);
}
int main() {
	fstream result("result.txt", ios::out);
	if (!result.is_open()) {
		cout << "not open" << endl;
		exit(EXIT_FAILURE);
	}
	double F;
	cout << "输入华氏温度:";
	cin >> F;
	result << F << "华氏度 = " << function(F) << "摄氏度" << endl;
	return 0;
}