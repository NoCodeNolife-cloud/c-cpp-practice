#pragma once
#include "fstream"
#include "iostream"
using namespace std;
class Matrix {
private:
	double** str;
public:
	Matrix() {
		str = new double* [3];
		for (int i = 0; i < 3; ++i) {
			str[i] = new double[3];
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				str[i][j] = 0;
			}
		}
		return;
	}
	Matrix(double _str[3][3]) {
		str = new double* [3];
		for (int i = 0; i < 3; ++i) {
			str[i] = new double[3];
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				str[i][j] = _str[i][j];
			}
		}
		return;
	}
	~Matrix() {
		return;
	}
	Matrix Transpose() {
		Matrix temp;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				temp.str[i][j] = this->str[j][i];
			}
		}
		return temp;
	}
	void Show() {
		fstream out("out.txt", ios::app);
		out << "¾ØÕó:" << endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				out << this->str[i][j] << "   ";
			}
			out << endl;
		}
		out.close();
		return;
	}
};