#include <iostream>
#include <string>
#include "GenericFather.h"
#include "GenericSun.h"

using namespace std;

int main() {

	GenericFather<string> genericFather("this is a test");
	cout << genericFather.getX() << endl;
	genericFather.setX("change the inform");
	cout << genericFather.getX() << endl;
	GenericSun<string, int> genericSun("this is another test", 15);
	cout << genericSun.getX() << " " << genericSun.getY() << endl;
}