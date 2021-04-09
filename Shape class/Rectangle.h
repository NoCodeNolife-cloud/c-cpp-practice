#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
private:
	float itsWidth;
	float itsLength;
public:
	Rectangle(float len, float width) :
		itsLength(len), itsWidth(width) {
		return;
	}
	~Rectangle() {
		return;
	}
	virtual float getArea() {
		return itsLength * itsWidth;
	}
	virtual float getLenth() {
		return itsLength;
	}
	virtual float getWidth() {
		return itsWidth;
	}
};
