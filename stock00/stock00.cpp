/*
创建并使用表示股票的类

将储存下面的信息
公司名称
所持股票的数量
每股的价格
股票总值

应该可执行的操作限制为
获得股票
增持
卖出股票
更新股票价格
显示关于所持股票的信息

并使用该类
*/
#include <iostream>
#include "assertion.h"
void main() {
	using namespace std;
	Stock fluffy_the_cat;
	fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(15, 18.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(400, 20.00);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(300000, 40.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(300000, 0.125);
	fluffy_the_cat.show();
	return;
}