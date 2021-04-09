/*
执行完下列语句后,a、b、c三个变量的值为多少
a=30
b=a++
c=++a
*/
#include <fstream>
#include <iostream>
void main() {
	using namespace std;
	ofstream result;
	result.open("result.txt");
	if (!result.is_open()) {
		cout << "error!" << endl;
		exit(EXIT_FAILURE);
	}
	int a = 30;
	int b = a++;
	int c = ++a;
	result << "a = " << a << endl;
	result << "b = " << b << endl;
	result << "c = " << c << endl;
	return;
}