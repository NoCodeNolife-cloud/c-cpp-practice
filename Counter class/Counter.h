#pragma once
class Counter {
private:
	unsigned short value;
public:
	Counter() :
		value(0)
	{
		return;
	}
	Counter(unsigned short initialValue) :
		value(initialValue) {
		return;
	}
	~Counter() {
		return;
	}
	void setValue(unsigned short x) {
		value = x;
		return;
	}
	unsigned short getValue()const {
		return value;
	}
	Counter operator+(const Counter& rhs) {
		return Counter(value + rhs.getValue());
	}
};
