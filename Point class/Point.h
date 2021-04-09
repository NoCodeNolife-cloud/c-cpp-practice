#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Point {
private:
	unsigned x;
	unsigned y;
public:
	Point() :x(0), y(0) { return; }
	Point(unsigned xx, unsigned yy) :x(xx), y(yy) { return; }
	unsigned getX() { return x; }
	unsigned getY() { return y; }
	void Print() {
		fstream out("out.txt", ios::app);
		if (!out.is_open()) {
			exit(EXIT_FAILURE);
		}
		out << "Point(" << x << "," << y << ")" << endl;
		out.close();
		return;
	}
	friend Point operator+(Point& pt, int nOffset);//сят╙
	friend Point operator+(int nOffset, Point& pt);
};