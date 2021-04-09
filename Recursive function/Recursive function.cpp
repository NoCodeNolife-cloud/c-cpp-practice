/*
在主程序中提示输入整数n,编写函数用递归函数用递归的方法求1+2+3+......+n的值
*/
#include <iostream>
#include <fstream>
using namespace std;
int function(int i) {
	if (i == 1) {//终止条件
		return 1;
	}
	else if (i > 1) {//递归调用
		return i + function(i - 1);
	}
}
int main() {
	fstream result("result.txt", ios::app);
	if (!result.is_open()) {
		cout << "not open" << endl;
		exit(EXIT_FAILURE);
	}
	cout << "enter number ";
	int num;
	cin >> num;
	for (int index = 1; index <= num; index++) {
		result << index;
		if (index != num) {
			result << "+";
		}
		else if (index == num) {
			result << "=";
		}
	}
	result << function(num) << endl;
	return 0;
}