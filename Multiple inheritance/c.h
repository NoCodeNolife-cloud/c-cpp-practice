#pragma once
#include "a.h"
#include "b.h"

class C :protected A, protected B {
protected:
	int c;
public:
	/**
	 * @brief constructor
	 * @param paraa int
	 * @param parab int
	 * @param parac int
	*/
	C(int paraa, int parab, int parac);
	/**
	 * @brief print member
	*/
	void printMember();
};
