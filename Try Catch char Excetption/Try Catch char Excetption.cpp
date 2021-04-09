#include <iostream>
#include <fstream>
using namespace std;

int main() {
	fstream out("out.txt", ios::app);
	if (!out.is_open()) {
		exit(EXIT_FAILURE);
	}
	char* buf;
	try {
		buf = new char[512];
		if (buf == 0) {
			throw"内存分配失败!";
		}
	}
	catch (char* str) {
		out << "有异常产生:" << str << endl;
	}
	return 0;
}