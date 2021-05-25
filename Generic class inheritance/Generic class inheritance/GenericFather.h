#pragma once

template<typename T>
class GenericFather{

private:

	T x;

public:

	GenericFather(T x) {

		this->x = x;
	}

	T getX() {

		return x;
	}

	void setX(T x) {

		this->x = x;
	}
};

