/*
定义一个Tree类,有成员ages,成员函数Grow(int years)对ages加上years,Age()显示tree对象的ages的值
*/
#include <iostream>
#include <fstream>
using namespace std;
class Tree {
private:
	int ages;
public:
	Tree(int _ages = 0);
	~Tree();
	void Grow(int _years);
	int Age();
};
Tree::Tree(int _ages)
{
	this->ages = _ages;
	return;
}
Tree::~Tree()
{
	return;
}
void Tree::Grow(int _years)
{
	this->ages += _years;
	return;
}
int Tree::Age()
{
	return this->ages;
}
int main() {
	fstream result("result.txt", ios::out);
	Tree tree(5);
	result << tree.Age() << endl;
	tree.Grow(4);
	result << "Now, the tree age is " << tree.Age();
	return 0;
}