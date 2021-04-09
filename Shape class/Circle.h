#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
private:
	float itsRadius;
public:
	Circle(float radius) :
		itsRadius(radius) {
		return;
	}
	~Circle() {
		return;
	}
	float getArea() {
		return 3.14 * itsRadius * itsRadius;
	}
};
