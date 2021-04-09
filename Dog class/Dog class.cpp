/*
定义一个Dog类,包含age,weight等属性,以及对这些属性操作的方法,然后测试这个类
*/
#include <iostream>
#include <fstream>
using namespace std;
class Dog {
private:
	int age, weight;
public:
	Dog(int initialAge = 0, int initialWeight = 5);
	~Dog();
	int getAge() { return age; }
	void setAge(int age) { this->age = age; };
	int getWeight() { return weight; };
	void setWeight(int weight) { this->weight = weight; };
};

Dog::Dog(int initialAge, int initialWeight)
{
	age = initialAge;
	weight = initialWeight;
}

Dog::~Dog()
{
}
int main() {
	fstream result("result.txt", ios::out);
	Dog Jack(2, 10);
	result << "Jack is a Dog who is ";
	result << Jack.getAge() << " years old and " << Jack.getWeight() << " pounds weight" << endl;
	Jack.setAge(7);
	Jack.setWeight(20);
	result << "Now Jack is ";
	result << Jack.getAge() << " years old and " << Jack.getWeight() << " pounds weight." << endl;
	return 0;
}