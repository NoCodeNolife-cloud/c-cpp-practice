/*
编写一个哺乳动物类Mammal,再由此派生出狗类Dog,二者都声明speak()成员函数,该函数在基类中被声明为虚函数,声明一个Dog类的对象,通过此对象调用speak函数,观察运行结果
*/
#include <iostream>
#include <fstream>
#include "Mammal.h"
#include "Dog.h"
using namespace std;
int main() {
	Mammal* pDog = new Dog;
	pDog->speak();
	delete pDog;
	return 0;
}