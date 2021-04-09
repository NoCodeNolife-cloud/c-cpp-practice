#pragma once
#include "Exception.h"
using namespace std;

class RangeError :
	public Exception
{
private:
	unsigned long BadNum;
public:
	RangeError(unsigned long number) {
		BadNum = number;
		return;
	}
	~RangeError() { return; }
	virtual void PrintError() {
		cout << "Out of Memory!!" << endl;
		return;
	}
	virtual unsigned long GetNumber() { return BadNum; }
	virtual void SetNumber(unsigned long number) {
		BadNum = number;
		return;
	}
};