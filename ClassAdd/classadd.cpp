#include <iostream>
#include "classadd.h"

using namespace std;

classAdd::classAdd() {
	x = y = 1;
	return;
}

void classAdd::printMember() {
	cout << "x = " << this->x << " y = " << y << endl;
	return;
}

void changeMember(classAdd& paraclassadd)
{
	paraclassadd.x = 3;
	paraclassadd.y = 6;
	return;
}