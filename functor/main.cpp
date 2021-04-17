// head
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

// square
template<typename T = int>
void func ( T& para_x ) {
	para_x *= para_x;
	return;
}

// main
int main () {
	// vector
	std::vector<int>vec;

	// file
	std::fstream fout ( "out.txt" , std::ios::out | std::ios::app );

	// insert value from 1 to 9
	for ( int i = 1; i <= 9; ++i ) {
		vec.push_back ( i );
	}

	// print
	std::copy ( vec.begin () , vec.end () , std::ostream_iterator<int> ( fout , " " ) );
	fout << std::endl;

	// for each
	std::for_each ( vec.begin () , vec.end () , func<int> );

	// print
	std::copy ( vec.begin () , vec.end () , std::ostream_iterator<int> ( fout , " " ) );
	fout << std::endl;

	// exit
	fout.close ();
	std::exit ( EXIT_SUCCESS );
}