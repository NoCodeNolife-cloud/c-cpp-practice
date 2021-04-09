/*
输出九九乘法表
※两个for语句并行
	一个打印首行,另一个打印剩下行并进行计算
*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
	fstream result("result.txt", ios::out);
	if (!result.is_open()) {
		cout << "not open!" << endl;
		exit(EXIT_FAILURE);
	}
	result << setw(8) << " ";
	for (int i = 1; i < 10; i++) {
		result << setw(8) << i;//乘数
	}
	result << endl;
	for (int i = 1; i < 10; i++) {
		result << setw(8) << i;//乘数
		for (int j = 1; j < 10; j++) {
			result << setw(8) << (i * j);//相乘
		}
		result << endl;
	}
	return 0;
}