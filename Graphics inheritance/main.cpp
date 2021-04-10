#include <iostream>
#include <fstream>
#include "shape.h"
#include "rectangle.h"

using namespace std;

int main(char argc, char* argv[])
{
	fstream fout("out.txt", ios::out | ios::app);
	if (!fout.is_open()) {
		cerr << "not open!\n";
		return 1;
	}
	Rectangle crectangle;
	fout << "length = " << crectangle.getLength() << endl;
	fout << "width = " << crectangle.getWidth() << endl;
	fout << "area = " << crectangle.getArea() << endl;
	system("pause");
	return 0;
}