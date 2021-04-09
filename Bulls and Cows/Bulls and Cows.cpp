/*
在程序中定义一个整型变量,赋以1~100的值,要求用户猜这个数,比较两个数的大小,知道用户猜对为止
*/
#include <fstream>
#include <iostream>
#include <random>
using namespace std;
int main() {
	fstream result("result.txt", ios::out);
	if (!result.is_open()) {
		cout << "not open!" << endl;
		exit(EXIT_FAILURE);
	}
	srand(time(0));
	int num = rand() % 100 + 1;
	result << num << endl;
	int guessnum;
	while (1) {
		int trytime = 0;
		trytime++;
		cout << "enter the guess number:";
		cin >> guessnum;
		result << "try times = " << trytime << "\tyour guess number is = " << guessnum << endl;
		if (guessnum > num) {
			cout << "too big!" << endl;
			result << "too big!" << endl;
		}
		else if (guessnum < num) {
			cout << "too small!" << endl;
			result << "too small!" << endl;
		}
		else if (guessnum == num) {
			cout << "right!" << endl;
			result << "right!" << endl;
			break;
		}
	}
	return 0;
}