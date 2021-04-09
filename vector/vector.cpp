#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include "vector.h"
using namespace std;

namespace VECTOR {
	const double Rad_to_deg = 45.0 / atan(1.0);

	void Vector::set_mag() {
		mag = sqrt(x * x + y * y);
		return;
	}

	void Vector::set_ang()
	{
		if (x == 0.0 && y == 0.0) {
			ang = 0.0;
		}
		else {
			ang = atan2(y, x);
		}
		return;
	}

	void Vector::set_x()
	{
		x = mag * cos(ang);
		return;
	}

	void Vector::set_y() {
		y = mag * sin(ang);
		return;
	}

	Vector::Vector()
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
		return;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT) {
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL) {
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else {
			cout << "Incorrect 3rd argument to Vector() -- ";
			cout << "vector set to 0" << endl;
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
		return;
	}

	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT) {
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL) {
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else {
			cout << "Incorrect 3rd argument to Vector() -- ";
			cout << "vector set to 0" << endl;
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
		return;
	}

	Vector::~Vector()
	{
		return;
	}

	void Vector::polar_mode()
	{
		mode = POL;
		return;
	}

	void Vector::rect_mode()
	{
		mode = RECT;
		return;
	}

	Vector Vector::operator+(const Vector& b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector& b) const
	{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}

	ostream& operator<<(ostream& os, const Vector& v)
	{
		if (v.mode == Vector::RECT) {
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		}
		else if (v.mode == Vector::POL) {
			os << "(m,a) = (" << v.mag << ", " << v.ang * Rad_to_deg << ")";
		}
		else {
			os << "Vector object mode is invalid";
		}
		return os;
	}

	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, x * y);
	}

	Vector operator*(double n, const Vector& a)
	{
		return a * n;
	}
}

int main() {
	using VECTOR::Vector;
	srand(time(NULL));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit): ";
	while (cin >> target) {
		cout << "Enter step length: ";
		if (!(cin >> dstep)) {
			break;
		}
		while (result.magval() < target) {
			direction = rand() & 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		cout << "After " << steps << " steps, the subject has the following location:" << endl;
		cout << result << endl;
		result.polar_mode();
		cout << " or" << endl << result << endl;
		cout << "Average outward distance per stp = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit):";
	}
	cout << "Bye!" << endl;
	cin.clear();
	return 0;
}