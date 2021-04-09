/*
下列表达式的值是多少
1) 201/4
2) 201%4
3) 201/4.0
*/
#include <iostream>
#include <fstream>
void main() {
	using namespace std;
	ofstream result;
	result.open("result.txt");
	if (!result.is_open()) {
		cout << "error! not open!" << endl;
		exit(EXIT_FAILURE);
	}
	result << "201/4 = " << 201 / 4 << endl;
	result << "201%4 = " << 201 % 4 << endl;
	result << "201/4.0 = " << 201 / 4.0 << endl;
	return;
}