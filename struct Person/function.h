#pragma once
#include "head.h"

fstream fout("out.txt", ios::out);

class function {
public:
	/**
	 * @brief initial person
	 * @param _per person
	*/
	void initialperson(person& _per) {
		cout << "name:";
		cin >> _per.name;
		cout << "sex:";
		cin >> _per.sex;
		cout << "age:";
		cin >> _per.age;
		cout << "identityCard:";
		cin >> _per.identityCard;
		cout << "income:";
		cin >> _per.income;
		cout << "Done!";
		return;
	}
	/**
	 * @brief show person value
	 * @param _per
	*/
	void show(person& _per) {
		fout << "name->" << _per.name << endl << "sex->" << _per.sex << endl << "age->" << _per.age << endl << "identityCard->" << _per.identityCard << endl << "income->" << _per.income << endl;
		return;
	}
};