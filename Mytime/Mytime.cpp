#include <iostream>
#include "Mytime.h"
using namespace std;

int main()
{
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;
	cout << "planning time = ";
	planning.Show();
	cout << endl;
	cout << "coding time = ";
	coding.Show();
	cout << endl;
	cout << "fixing time = ";
	fixing.Show();
	cout << endl;
	total = coding + fixing;
	cout << "coding + fixing = ";
	total.Show();
	cout << endl;
	Time morefixing(3, 28);
	cout << "more fixing time = ";
	morefixing.Show();
	cout << endl;
	total = morefixing.operator+(total);
	cout << "morefixing.operator+(total) = ";
	total.Show();
	cout << endl;
	return 0;
}

Time::Time()
{
	hours = minutes = 0;
	return;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
	return;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
	return;
}

void Time::AddHr(int h)
{
	hours += h;
	return;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
	return;
}

Time Time::Sum(const Time& t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator+(const Time& t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return Time(sum);
}

void Time::Show() const
{
	cout << hours << " hours, " << minutes << " mintes";
	return;
}