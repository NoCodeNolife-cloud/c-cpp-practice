#include "student.h"

cod::Student::Student ( std::string para_name , int para_number , int para_score ) {
	this->name = para_name;
	this->number = para_number;
	this->score = para_score;
	return;
}

cod::Student::~Student () {
	return;
}

std::string cod::Student::getName () {
	return this->name;
}

int  cod::Student::getNumber () {
	return number;
}

int cod::Student::getScore () {
	return score;
}