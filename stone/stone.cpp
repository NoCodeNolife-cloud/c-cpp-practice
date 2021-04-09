#include "Function.h"
#include "Stonewt.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	Stonewt incognito = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);

	cout << "The celebrity weighed ";
	incognito.show_stn();
	cout << "The detective weighed ";
	wolfe.show_stn();
	cout << "The President weighed ";
	taft.show_lbs();
	incognito = 276.8;
	taft = 325;
	cout << "After dinner, the celebrity weighed ";
	incognito.show_stn();
	cout << "After dinner, the celebrity weighed ";
	taft.show_lbs();
	display(taft, 2);
	cout << "The wrestler weighed even more." << endl;
	display(422, 2);
	cout << "No stone left uneraned" << endl;
	return 0;
}