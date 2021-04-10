#include "head.h"

fstream fout("out.txt", ios::out);
fstream fin("in.txt", ios::in);

void function::caculate() {
	double _x = 1, _y = 1, _z = 1;
	fin >> _x >> _y >> _z;
	if (_z == 0) {
		fout << "input error!\n";
		return;
	}
	else {
		fout << "x=" << _x << endl << "y=" << _y << endl << "z=" << _z << endl;
		fout << "(x*303*y-64)/z = " << (_x + 303 * _y - 64) / _z << endl;
		return;
	}
}