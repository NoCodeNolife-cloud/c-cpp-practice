#include <iostream>
#include "a.h"
#include "b.h"
#include "c.h"

using namespace std;

int main(char argc, char* argv[]) {
	C cc(3, 4, 5);
	cc.printMember();
	system("pause");
	return 0;
}