/*
编写一个计数器Counter类,对其重载运算符"+"
*/
#include <iostream>
#include <fstream>
#include "Counter.h"
using namespace std;
int main() {
	fstream out("out.txt", ios::out);
	if (!out.is_open()) {
		exit(EXIT_FAILURE);
	}
	Counter varOne(2), varTwo(4), varThree;
	varThree = varOne + varTwo;
	out << "varOne:" << varOne.getValue() << endl;
	out << "varTwo:" << varTwo.getValue() << endl;
	out << "varThree:" << varThree.getValue() << endl;
	out.close();
	return 0;
}