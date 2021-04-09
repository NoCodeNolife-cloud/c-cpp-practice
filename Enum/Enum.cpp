/*
声明枚举类型Weekday,包括SUNDAY到SATURDAY7个元素在程序中声明Weekday类型的变量,对其赋值,声明整型变量,看看能否对其赋Weekday类型的值
*/
#include <iostream>
#include <fstream>
using namespace std;
enum Weekday {//枚举类型,默认从零开始赋值
	SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};
int main() {
	fstream result("result.txt", ios::app);
	if (!result.is_open()) {
		cout << "can't open!" << endl;
		return 1;
	}
	int i;
	Weekday d = THURSDAY;
	result << "d=" << d << endl;
	i = d;
	result << "i=" << i << endl;
	d = (Weekday)6;
	result << "d=" << d << endl;
	d = Weekday(4);
	result << "d=" << d << endl;
	return 0;
}