#pragma once

class classAdd {
private:
	int x;
	int y;
public:
	/**
	 * @brief constructor function
	*/
	classAdd();
	/**
	 * @brief print member
	*/
	void printMember();
	/**
	 * @brief friend function
	*/
	friend void changeMember(classAdd& paraclassadd);
};
