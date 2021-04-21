#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>

template <typename T>
struct cmp {
	bool operator()( const T& _left , const T& _right ) {
		return _left < _right;
	}
};

int main () {
	// open file
	std::fstream fout ( "out.txt" , std::ios::app );

	// create a string vector
	std::vector<std::string>coll ( ( std::istream_iterator<std::string> ( std::cin ) ) , std::istream_iterator<std::string> () );

	// sort
	std::sort ( coll.begin () , coll.end () , cmp<std::string> () );

	//print
	std::copy ( coll.begin () , coll.end () , std::ostream_iterator<std::string> ( fout , "\n" ) );

	//exit
	std::exit ( EXIT_SUCCESS );
}