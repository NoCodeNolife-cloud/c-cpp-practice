#include <iostream>
#include <fstream>
#include <random>
#include <time.h>
using namespace std;

class Number {
private:
	int x, y;
public:
	Number() {
		srand(time(NULL));
		x = rand() % 1000;
		y = rand() % 1000;
		return;
	}
	Number(int _x, int _y) :
		x(_x), y(_y)
	{
		return;
	}
	void Setx(int _x) {
		x = _x;
		return;
	}
	int Getx()const {
		return x;
	}
	void Sety(int _y) {
		y = _y;
		return;
	}
	int Gety()const {
		return y;
	}
};

ostream& operator<<(ostream& _out, Number& _number) {
	_out << "(" << _number.Getx() << "," << _number.Gety() << ")";
	return _out;
}

fstream& operator<<(fstream& _out, Number& _number) {
	_out << "(" << _number.Getx() << "," << _number.Gety() << ")";
	return _out;
}

int main() {
	fstream out("out.txt", ios::app);
	if (!out.is_open()) {
		exit(EXIT_FAILURE);
	}
	Number number;
	cout << number << endl;
	out << number << endl;
	return 0;
}