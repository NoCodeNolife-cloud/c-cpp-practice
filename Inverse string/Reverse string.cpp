/*
编写函数void reverse(string &s),用递归算法使字符串s倒序
※str.substr(begin,length) 表示切割字符串str，从下标begin处开始，长度为length来切片
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string reverse(string& str) {
	if (str.length() > 1/*终止条件*/) {//迭代
		string sub = str.substr(1, str.length() - 2);//str.substr(begin,length)方法
		return str.substr(str.length() - 1, 1) + reverse(sub) + str.substr(0, 1);//最后字符+<迭代>+最前字符
	}
	else {
		return str;
	}
}
int main() {
	string str;
	fstream out("out.txt", ios::out);
	cout << "输入一个字符串:";
	cin >> str;
	out << "原字符串为:" << str << endl;
	out << "倒序反转后为:" << reverse(str) << endl;
	return 0;
}