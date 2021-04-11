#include <iostream>
#include "classadd.h"

using namespace std;

int main(char argc, char* argv[]) {
	classAdd cclassadd;
	cclassadd.printMember();
	changeMember(cclassadd);
	cclassadd.printMember();
	system("pause");
	return 0;
}