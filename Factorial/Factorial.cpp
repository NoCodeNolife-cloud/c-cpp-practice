/*
定义一个递归函数,接收一个整数参数,并返回该参数的阶层
*/
#include <iostream>
long factorial(int para_i) {
	if (para_i > 0) {
		return factorial(para_i - 1) * para_i;
	}
	else {
		return 1;
	}
}
void main() {
	using namespace std;
	int i;
	cout << "要计算的阶乘为 : ";
	cin >> i;
	cout << i
		<< "! = \t"
		<< factorial(i)
		<< endl;
	return;
}