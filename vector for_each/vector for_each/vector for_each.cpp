#include <vector>
#include <iostream>

int main () {
	srand ( time ( NULL ) );// random
	int arr [ 10 ] = {  };// declare array

	// initialize
	for ( int& itm : arr ) {
		itm = rand () % 100;
	}

	// print
	for ( int itm : arr ) {
		std::cout << itm << " ";
	}
	std::cout << std::endl;

	std::vector<int>vec ( 10 );// declare vector

	// initialize
	for ( int& itm : vec ) {
		itm = rand () % 1000;
	}

	// print
	for ( int itm : vec ) {
		std::cout << itm << " ";
	}
	std::cout << std::endl;

	system ( "pause" );
}