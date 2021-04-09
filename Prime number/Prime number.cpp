/*
用穷举法找出1~100间的质数,显示出来,分别使用while,do-while,for循环语句实现
质数:从2到sqrt(i)中所有数都不能整除i
	遍历:int j 从2->sqrt(i)
	flag作为标志,flag为1.则为

*/
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main() {
	fstream result("result.txt", ios::out);
	result << "while循环" << endl;//while循环语句
	int i = 2, flag, j;
	while (i <= 100) {
		flag = 1;
		j = 2;
		while (j <= sqrt(i)) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
			j++;
		}
		if (flag) {
			result << i << "是质数" << endl;
		}
		i++;
	}
	result << endl << "do-while循环" << endl;//do-while循环
	i = 2;
	do {
		flag = 1;
		j = 2;
		do {
			if (i % j == 0 && j <= sqrt(i)) {
				flag = 0;
				break;
			}
			j++;
		} while (j <= sqrt(i));
		if (flag) {
			result << i << "是质数." << endl;
		}
		i++;
	} while (i <= 100);
	result << endl << "for循环" << endl;//for循环语句
	for (i = 2; i <= 100; i++) {
		flag = 1;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			result << i << "是质数." << endl;
		}
	}
	return 0;
}