#pragma once
#include "Exception.h"
using namespace std;

class OutOfMemory :
	public Exception
{
public:
	OutOfMemory() { return; }
	~OutOfMemory() { return; }
	virtual void PrintError() { cout << "Out of Memory!!" << endl; }
};
