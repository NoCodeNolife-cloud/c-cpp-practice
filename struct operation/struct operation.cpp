/*
下面是一个结构声明:
struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
}
a.编写一个函数,按值传递box结构,并显示每个成员的值
b.编写一个函数,传递box结构的地址,并将volume成员设置成其他三维长度的乘积
c.编写一个使用这两个函数的简单程序
*/
#include <iostream>
struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void show(box para_box) {
	using namespace std;
	cout << "maker = \t"
		<< para_box.maker
		<< endl
		<< "height = \t"
		<< para_box.height
		<< endl
		<< "width = \t"
		<< para_box.width
		<< endl
		<< "length = \t"
		<< para_box.length
		<< endl
		<< "volume = \t"
		<< para_box.volume
		<< endl;
	return;
}//显示每个成员的值
void function(box* para_box) {
	para_box->volume = para_box->height * para_box->length * para_box->width;
}//计算volume
void main() {
	using namespace std;
	box box_one = {
		"This is my name",
		5,
		4,
		3
	};
	function(&box_one);
	show(box_one);
	return;
}