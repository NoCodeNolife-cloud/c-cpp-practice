/*
已知x,y两个变量,写一条简单的if语句,把较小的值赋值给原本值较大的变量
*/
#include <iostream>
#include <fstream>
void main() {
	using namespace std;
	ofstream result;
	result.open("result.txt");
	if (!result.is_open()) {
		cout << "error!" << endl;
		exit(EXIT_FAILURE);
	}
	int x, y;
	cout << "x = ";
	cin >> x;
	result << "x = " << x << endl;
	cout << "y = ";
	cin >> y;
	result << "y = " << y << endl;
	if (x > y) {
		x = y;
	}
	else {
		y = x;
	}
	result << "Done! Then :" << endl;
	result << "x = " << x << endl << "y = " << y << endl;
	return;
}