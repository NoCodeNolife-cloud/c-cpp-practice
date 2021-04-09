#pragma once
#include "Rectangle.h"
class Square :
	public Rectangle
{
public:
	Square(float len) :
		Rectangle(len, len) {
		return;
	}
	~Square() {
		return;
	}
};
