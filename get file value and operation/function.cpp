#include "function.h"

double cod::getAvg ( std::vector<cod::Student> para_vec ) {
	double res = 0;
	for ( cod::Student item : para_vec ) {
		res += item.getScore ();
	}
	return res / para_vec.size ();
}

cod::Student cod::getMax ( std::vector<cod::Student> para_vec ) {
	int maxindex = 0;
	for ( int i = 1; i < para_vec.size (); ++i ) {
		if ( para_vec [ maxindex ].getScore () < para_vec [ i ].getScore () ) {
			maxindex = i;
		}
	}
	return para_vec [ maxindex ];
}