#include "Number.h"

Number::Number () {
	for ( int i = 0; i < 100; i++ ) {
		vec.push_back ( true );
	}
}

void Number::Prime () {
	vec [ 0 ] = false;
	vec [ 1 ] = false;
	for ( int i = 2; i < vec.size (); ++i ) {
		if ( vec [ i ] ) {
			int j = i * 2;
			while ( j < vec.size () ) {
				vec [ j ] = false;
				j += i;
			}
		}
	}
}

void Number::Print () {
	Prime ();
	int cnt = 0;
	for ( int i = 0; i < vec.size (); ++i ) {
		if ( vec [ i ] ) {
			std::cout << i << " ";
			++cnt;
		}
	}
	std::cout << std::endl << cnt << std::endl;
}