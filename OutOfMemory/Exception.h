#pragma once
using namespace std;

class Exception
{
public:
	Exception() { return; }
	virtual ~Exception() { return; }
	virtual void PrintError() = 0;
	//纯虚函数是在声明虚函数时被“初始化”为0的函数。声明纯虚函数的一般形式是 virtual 函数类型 函数名 (参数表列) =0;
	//纯虚函数只有函数的名字而不具备函数的功能，不能被调用。它只是通知编译系统: “在这里声明一个虚函数，留待派生类中定义”。在派生类中对此函数提供定义后，它才能具备函数的功能，可被调用。
};
