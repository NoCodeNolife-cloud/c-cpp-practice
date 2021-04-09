#pragma once
#include "Mammal.h"
extern fstream out;
class Dog :
	public Mammal
{
public:
	Dog() {
		cout << "Dog Constructor..." << endl;
	}
	~Dog() {
		cout << "Dog destructor..." << endl;
	}
	void speak()const {
		cout << "Woof!" << endl;
	}
};
