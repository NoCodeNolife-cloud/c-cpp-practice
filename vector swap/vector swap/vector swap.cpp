#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

int main () {
	std::vector<int>coll1 ( 10 );
	std::vector<int>coll2 ( 10 );

	std::cout << "coll1: ";
	for ( int i = 0; i < 10; ++i ) {
		coll1 [ i ] = i;
		std::cout << std::setw ( 5 ) << coll1 [ i ];
	}
	std::cout << std::endl;

	std::cout << "coll2: ";
	for ( int i = 0; i < 10; ++i ) {
		coll2 [ i ] = i + 10;
		std::cout << std::setw ( 5 ) << coll2 [ i ];
	}
	std::cout << std::endl;

	std::swap ( coll1 , coll2 );

	std::cout << "coll1: ";
	for ( int item : coll1 ) {
		std::cout << std::setw ( 5 ) << item;
	}
	std::cout << std::endl;

	std::cout << "coll2: ";
	for ( int item : coll2 ) {
		std::cout << std::setw ( 5 ) << item;
	}
	std::cout << std::endl;

	system ( "pause" );
}