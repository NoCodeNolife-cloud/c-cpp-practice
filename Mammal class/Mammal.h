#pragma once
class Mammal
{
public:
	Mammal() {
		cout << "Mammal constructor..." << endl;
	}
	virtual ~Mammal() {
		cout << "Mammal destructor..." << endl;
	}
	virtual void speak()const {
		cout << "Mammal speak!" << endl;
	}
};