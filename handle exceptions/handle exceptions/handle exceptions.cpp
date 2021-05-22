#include <iostream>
#include <algorithm>

using namespace std;

double division ( double& x , double& y ) {

	if ( y == 0 ) {

		throw "can't division zero";
	} else {

		return x / y;
	}
}

int main () {

	double a = 5;
	double b = 0;

	try {

		cout << division ( a , b );
	} catch ( const char argc [] ) {// or const char* argc

		cout << argc << endl;
	}

	system ( "pause" );
}