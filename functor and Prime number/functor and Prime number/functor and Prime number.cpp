#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>

class cod {
public:
	bool operator()( const int& _para ) {
		for ( int i = 2; i <= sqrt ( _para ); ++i ) {
			if ( _para % i == 0 ) {
				return true;
			}
		}
		return false;
	}
};

int main () {
	std::vector<int>vec ( 100 );

	for ( int i = 0; i < vec.size (); ++i ) {
		vec [ i ] = i + 2;
	}

	std::vector<int>::iterator pos = std::remove_if ( vec.begin () , vec.end () , cod () );
	vec.erase ( pos , vec.end () );

	for ( int item : vec ) {
		std::cout << item << " ";
	}
	std::cout << std::endl;

	system ( "PAUSE" );
}