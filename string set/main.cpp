#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <fstream>

template <typename T>
struct cmp {
	bool operator()( const T& _left , const T& _right ) const {
		return _left < _right;
	}
};

int main () {
	// open file
	std::fstream fout ( "out.txt" , std::ios::app );

	// assign
	std::set<std::string , cmp<std::string>>coll ( ( std::istream_iterator<std::string> ( std::cin ) ) , ( std::istream_iterator<std::string> () ) );

	// print
	std::copy ( coll.begin () , coll.end () , std::ostream_iterator<std::string> ( fout , "\n" ) );

	// close file
	fout.close ();

	// exit
	system ( "PUASE" );
	std::exit ( EXIT_SUCCESS );
}