#include "head.h"

fstream fout("out.txt", ios::out);

void function::initial(short _num[], size_t _size) {
	for (int i = 0; i < _size; i++) {
		if (i != 0 and i % 2 == 0) {
			_num[i] = 0;
		}
		else {
			_num[i] = 3 * (i + 1) + 1;
		}
	}
	return;
}

void function::print(short _num[], size_t _size) {
	for (int i = 0; i < _size; i++) {
		fout << setw(5) << left << _num[i];
	}
	return;
}