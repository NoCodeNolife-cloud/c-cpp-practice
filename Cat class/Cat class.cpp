/*
定义一个Cat类,拥有静态数据成员numOfCats,记录Cat的个体数目;静态成员函数getNumOfCats(),存取numOfCats,设计程序测试这个类,体会静态数据成员和静态成员函数的用法
*/
#include <iostream>
#include <fstream>
using namespace std;
class Cat {
private:
	int itsAge;
	static int numOfCats;
public:
	Cat(int age) :
		itsAge(age) {
		numOfCats++;
	}
	virtual ~Cat() {
		numOfCats--;
	}
	virtual int setAge() {
		return itsAge;
	}
	virtual void setAge(int age) {
		itsAge = age;
	}
	static int getNumOfCats() {
		return numOfCats;
	}
};
int Cat::numOfCats = 0;
void telepathicFunction();
int main() {
	const int maxCats = 5;
	Cat* catHouse[maxCats];
	int i;
	for (i = 0; i < maxCats; i++) {
		catHouse[i] = new Cat(i);
		telepathicFunction();
	}
	for (i = 0; i < maxCats; i++) {
		delete catHouse[i];
		telepathicFunction();
	}
	return 0;
}
void telepathicFunction() {
	fstream result("result.txt", ios::app);
	result << "There are " << Cat::getNumOfCats() << " cats alive!" << endl;
}