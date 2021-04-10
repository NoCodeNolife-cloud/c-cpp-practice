#include <iostream>
#include <fstream>
#include "Shape.h"
#include "Rectangle.h"

using namespace std;

auto main(int argc, char* argv[]) -> int {
	Rectangle reg(50, 25);
	reg.caluateArea();
	cout << "the run time is ->" << double(clock()) / double(CLOCKS_PER_SEC) << "<-\n";
	system("pause");
	return 0;
}