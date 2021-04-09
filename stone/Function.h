#pragma once
#include "Stonewt.h"
#include <iostream>
#include <fstream>
using namespace std;

iostream& operator<<(iostream& _out, Stonewt& _stonewt) {
	_out << _stonewt.GetStone() << " stone, " << _stonewt.GetPds_left() << " pounds" << endl;
	_out << _stonewt.GetPounds() << " pounds" << endl;
	return _out;
}

fstream& operator<<(fstream& _out, Stonewt& _stonewt) {
	_out << _stonewt.GetStone() << " stone, " << _stonewt.GetPds_left() << " pounds" << endl;
	_out << _stonewt.GetPounds() << " pounds" << endl;
	return _out;
}

void display(const Stonewt& st, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Wow!";
		st.show_stn();
		return;
	}
}