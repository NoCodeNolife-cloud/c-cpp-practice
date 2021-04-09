#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream result("result.txt", ios::out);
	if (!result.is_open()) {
		cout << "error!" << endl;
		exit(EXIT_FAILURE);
	}
	for (int i = 32; i < 128; i++) {
		result << (char)i;
	}
	exit(EXIT_SUCCESS);
}