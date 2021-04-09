/*
假设有两个无关系的类Engine和Fuel,使用时,怎样允许Fuel成员访问Engine中的私有和保护成员
※C++中的friend关键字其实做这样的事情:在一个类中指明其他的类(或者)函数能够直接访问该类中的private和protected成员。
*/
#include <iostream>
using namespace std;
class engine {
	friend class fuel;//指定fuel可以访问engine成员
private:
	int powerlevel;
public:
	engine() { powerlevel = 0; }
	void engine_fn(fuel& f);
};
class fuel {
	friend class engine;//指定engine可以访问fuel成员
private:
	int fuelLevel;
public:
	fuel() { fuelLevel = 0; }
	void fuel_fn(engine& e);
};
int main() {
	return 0;
}